#include <list>
#include <vector>
#include <set>
#include <map>

#define TERMINAL_TOKEN_LIMIT 1000

typedef int Token;
typedef std::vector<Token> Rule;
typedef std::vector<Rule> Rules;
typedef std::set<Token> FirSet;
typedef std::set<Token> FolSet;

typedef std::map<Token, bool> Nullable;
typedef std::map<Token, FirSet> First;
typedef std::map<Token, FolSet> Follow;

std::list<Token> g_tokens;

Rules g_rules;

First g_first;
Follow g_follow;
Nullable g_nullable;


std::map<std::string, std::set<int>> g_tbl;

std::map<Token, std::string> g_token_to_string_map;

bool IsTerminal(Token t)
{
    return t < TERMINAL_TOKEN_LIMIT;
}

void scan_input()
{
    // a 1, c 2, d 3, X 1001, Y 1002, Z 1003
    g_tokens = {1, 2, 3, 1001, 1002, 1003};
    g_token_to_string_map = {{1, "a"}, {2, "c"}, {3, "d"}, {1001, "X"}, {1002, "Y"}, {1003, "Z"}};

    g_rules.push_back({1003, 3});
    g_rules.push_back({1003, 1001, 1002, 1003});
    g_rules.push_back({1002});
    g_rules.push_back({1002, 2});
    g_rules.push_back({1001, 1002});
    g_rules.push_back({1001, 1});
}

std::string token_to_string(Token t)
{
    auto ret = g_token_to_string_map.find(t);
    if (ret == g_token_to_string_map.end())
    {
        printf("error unknown token %d\n", t);
        return "";
    } else
    {
        return ret->second;
    }
}

void first(const std::vector<Token>& tks, FirSet& result)
{
    bool ret = true;
    auto it = tks.begin();
    while ((++it) != tks.end())
    {
        if (ret)
        {
            auto tmp = g_first[*it];
            result.insert(tmp.begin(), tmp.end());
        }
        else
        {
            break;
        }

        if (!g_nullable[*it])
            ret = false;
    }
}

bool nullable(const std::vector<Token>& tks)
{
    bool ret = true;
    auto it = tks.begin();
    while ((++it) != tks.end())
        ret = ret && g_nullable[*it];
    return ret;
}

void proc()
{
    // init
    g_first.clear(); g_follow.clear();
    for (auto tk : g_tokens)
    {
        if (IsTerminal(tk))
        {
            g_first[tk].insert(tk);
        }
        else
        {
            g_nullable[tk] = false;
            g_first[tk];
            g_follow[tk];
        }
    }

    //
    do
    {
        auto ori = g_nullable;
        for (auto& rule : g_rules)
        {
            bool ret = true;
            Rule::iterator it = rule.begin();
            while ((++it) != rule.end())
                ret = ret && g_nullable[*it];

            if (ret)
                g_nullable[rule.front()] = true;
        }
        if (ori == g_nullable)
            break;
    }
    while (true);

    do
    {
        auto ori = g_first;
        for (auto& rule : g_rules)
        {
            bool allNullable = true;
            auto it = rule.begin();
            while ((++it) != rule.end())
            {
                if (allNullable)
                {
                    auto tmp = g_first[*(it)];
                    g_first[rule.front()].insert(tmp.begin(), tmp.end());
                }
                else
                {
                    break;
                }
                if (!g_nullable[*it])
                {
                    allNullable = false;
                }
            }
        }

        if (ori == g_first)
            break;
    }
    while (true);

    do
    {
        auto ori = g_follow;

        for (auto& rule : g_rules)
        {
            size_t k = rule.size() - 1;
            for (size_t i = 1; i < k; ++i)
            {
                bool ret = true;
                size_t m = i;
                while ((++m) <= k)
                    ret = ret && g_nullable[rule[m]];

                if (ret)
                {
                    auto tmp = g_follow[rule.front()];
                    g_follow[rule[i]].insert(tmp.begin(), tmp.end());
                }

                for (size_t j = 1 + i; j <= k; ++j)
                {
                    bool ret = true;
                    size_t m = i;
                    while ((++m) < j)
                    {
                        ret = g_nullable[rule[m]];
                    }
                    if (ret)
                    {
                        auto tmp = g_first[rule[j]];
                        g_follow[rule[i]].insert(tmp.begin(), tmp.end());
                    }
                }
            }
        }

        if (ori == g_follow)
            break;
    }
    while (true);

    int ruleidx = 0;
    for (auto& rule : g_rules)
    {
        FirSet s1;
        Token X = *(rule.begin());
        first(rule, s1);
        if (nullable(rule))
        {
            auto tmp = g_follow[X];
            s1.insert(tmp.begin(), tmp.end());
        }

        for (auto T : s1)
        {
            std::string key = token_to_string(X) + "_" + token_to_string(T);
            g_tbl[key].insert(ruleidx );
        }
        ruleidx++;
    }
    return;
}

void print_rule(const Rule& rul)
{
    auto it = rul.begin();
    std::string tmp = token_to_string(rul.front()) + "->";
    while ((++it) != rul.end())
        tmp += token_to_string(*it) + " ";
    tmp += "\n";
    printf(tmp.c_str());
}

int main()
{
    scan_input();

    printf("rules:\n");
    for (auto& rule : g_rules)
    {
        print_rule(rule);
        printf("\n");
    }

    proc();
    printf("LL predict table:\n");
    for (auto& tbitem : g_tbl)
    {
        for (auto ruleidx : tbitem.second)
        {
            printf("%+8s:", tbitem.first.c_str());
            print_rule(g_rules[ruleidx]);
            printf("\n");
        }
    }

    return 0;
}