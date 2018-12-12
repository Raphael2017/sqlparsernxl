#include "LRAnalysis.h"

namespace LR_ANALYSIS
{
    const int TERMINAL_TOKEN_LIMIT = 1000;
    std::list<Token> g_tokens;
    Rules g_rules;
    First g_first;
    Follow g_follow;
    Nullable g_nullable;
    std::map<std::string, std::set<int>> g_predict_tbl;
    std::map<Token, std::string> g_token_to_string_map;
    std::set<LRState> g_LR;

    const Rule* Item::getRule() const
    {
        if (0 <= rule_idx && rule_idx < g_rules.size())
            return &g_rules[rule_idx];
        return nullptr;
    }

    bool Item::operator<(const Item& r) const
    {
        if (rule_idx < r.rule_idx)
            return true;
        else if (rule_idx > r.rule_idx)
            return false;
        else
        {
            if (dot < r.dot)
                return true;
            else if (dot > r.dot)
                return false;
            else
            {
                if (x < r.x)
                    return true;
                else
                    return false;
            }
        }
    }

    bool Item::operator==(const Item& r) const
    {
        return rule_idx == r.rule_idx && dot == r.dot && x == r.x;
    }

    bool IsTerminal(Token t)
    {
        return t < TERMINAL_TOKEN_LIMIT;
    }

    void scan_input()
    {
        /*
        // if 1, then 2, else 3, begin 4, print 5, end 6, ; 7, numm 8, = 9, E 1001, L 1002, S 1003
        // gramma 3-5
        g_tokens = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1001, 1002, 1003};
        g_token_to_string_map = {{1,"if"},{2,"then"},{3,"else"},{4,"begin"},{5,"print"},{6,"end"},
                                 {7,";"},{8,"num"},{9,"="},{1001,"E"},{1002,"L"},{1003,"S"}};
        g_rules.push_back({1003, 1, 1001, 2, 1003, 3, 1003});
        g_rules.push_back({1003, 4, 1003, 1002});
        g_rules.push_back({1003, 5, 1001});
        g_rules.push_back({1002, 6});
        g_rules.push_back({1002, 7, 1003, 1002});
        g_rules.push_back({1001, 8, 9, 8});*/
        /*
        // a 1, c 2, d 3, X 1001, Y 1002, Z 1003
        // gramma 3-6
        g_tokens = {1, 2, 3, 1001, 1002, 1003};
        g_token_to_string_map = {{1, "a"}, {2, "c"}, {3, "d"}, {1001, "X"}, {1002, "Y"}, {1003, "Z"}};

        g_rules.push_back({1003, 3});
        g_rules.push_back({1003, 1001, 1002, 1003});
        g_rules.push_back({1002});
        g_rules.push_back({1002, 2});
        g_rules.push_back({1001, 1002});
        g_rules.push_back({1001, 1}); */

        // $ 0, x 1, * 2, = 3, V 1001, E 1002, S 1003, S1 1004
        // gramma 3-10
        g_tokens = {0,1,2,3,1001,1002,1003,1004};
        g_token_to_string_map = {{0,"$"},{1, "x"},{2, "*"},{3, "="},{1001, "V"},{1002, "E"},{1003, "S"},{1004, "S1"}};
        g_rules.push_back({1004,1003,0});
        g_rules.push_back({1003,1001,3,1002});
        g_rules.push_back({1003,1002});
        g_rules.push_back({1002,1001});
        g_rules.push_back({1001,1});
        g_rules.push_back({1001,2,1002});

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
                g_predict_tbl[key].insert(ruleidx );
            }
            ruleidx++;
        }
        return;
    }

    void Closure(LRState& state)
    {
        LRState tmp;
        do
        {
            auto ori = state;

            tmp.clear();
            for (auto& item : state)
            {
                if (item.dot >= item.getRule()->size())
                    continue;
                auto X = (*item.getRule())[item.dot];
                std::vector<Token> beta;
                for (size_t m = item.dot; m < item.getRule()->size(); ++m)
                    beta.push_back((*item.getRule())[m]);

                beta.push_back(item.x);
                FirSet fir;
                first(beta, fir);

                int rule_idx = 0;
                for (auto& rule:g_rules)
                {
                    if (X == rule.front())
                    {
                        for (auto omega : fir)
                        {
                            tmp.insert({rule_idx, 1, omega});
                        }
                    }
                    ++rule_idx;
                }
            }
            state.insert(tmp.begin(), tmp.end());
            if (ori == state)
                break;
        }
        while (true);
    }

    void Goto(const LRState& I, Token X, LRState& J)
    {
        for (const Item& item : I)
        {
            if (item.dot >= item.getRule()->size())
                continue;
            auto K = (*item.getRule())[item.dot];
            if (X == K)
            {
                J.insert({item.rule_idx, 1+item.dot, item.x});
            }
        }
        Closure(J);
    }

    void procLR()
    {
        LRState state1;
        state1.insert({0, 1, 0});
        Closure(state1);

        auto& LR = g_LR;
        LR.clear();
        LR.insert(state1);
        std::set<LRState> ttmp;
        do
        {
            auto ori = LR;

            ttmp.clear();
            for (const LRState& state : LR)
            {
                for (const Item& item : state)
                {
                    if (item.dot >= item.getRule()->size())
                        continue;
                    auto X = (*item.getRule())[item.dot];
                    LRState J;
                    Goto(state, X, J);
                    ttmp.insert(J);
                }
            }

            LR.insert(ttmp.begin(), ttmp.end());
            if (LR == ori)
                break;
        }
        while (true);
        return;
    }

    void print_item(const Item& item)
    {
        auto& rul = *item.getRule();
        auto it = rul.begin();
        int idx = 0;
        char sss[64] = { 0 };
        sprintf(sss, "%-4s", token_to_string(rul.front()).c_str());
        std::string tmp = sss;
        tmp += "->";

        std::string kk = "";
        while ((++it) != rul.end())
        {
            ++idx;
            if (idx == item.dot)
                kk += ".";
            kk += token_to_string(*it) + " ";
        }
        char ss[64] = { 0 };
        sprintf(ss, "%-8s", kk.c_str());
        tmp += ss;

        tmp += "\t," + token_to_string(item.x);
        tmp += "\n";
        printf(tmp.c_str());
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

    void print_all_rules()
    {
        printf("rules:\n");
        for (auto& rule : g_rules)
        {
            print_rule(rule);
            printf("\n");
        }
    }

    void print_predict_table()
    {
        printf("LL predict table:\n");
        for (auto& tbitem : g_predict_tbl)
        {
            for (auto ruleidx : tbitem.second)
            {
                printf("%+8s:\t", tbitem.first.c_str());
                print_rule(g_rules[ruleidx]);
                printf("\n");
            }
        }
    }
}