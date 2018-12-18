#include "parser.h"
#include <algorithm>
#include <time.h>
#include <assert.h>

bool IsFromTable(Node* nd);
bool CompareIgnoreCase(const std::string& l, const std::string& r);
bool CheckCTE(Entry ety, Node* tb, std::string& ret);

int main()
{
    std::string a = "";

    a = "WITH cte1\n"
        "     AS (SELECT *\n"
        "         FROM   abc)\n"
        "SELECT *\n"
        "FROM   (WITH cte1\n"
        "             AS (SELECT *\n"
        "                 FROM   umd)\n"
        "        SELECT *\n"
        "         FROM   cte1) AS CMM";

    {
        ParseResult result;
        std::vector<yytokentype> tks;
        parser::parse(a, &result);
        if (result.accept)
            printf("%s\n", result.result_tree_->serialize().c_str());
        if (result.accept)
        {
            std::set<std::string> tbs;
            Node::visit(result.result_tree_, [&tbs](Node* nd, Entry ety){
                if (!IsFromTable(nd))
                    return;
                std::string name;
                if (!CheckCTE(ety, nd, name))
                {
                    tbs.insert(name);
                }
            });
            printf("analyze table:\n");
            for (auto tb : tbs)
            {
                printf("%s\n", tb.c_str());
            }
        }
    }

    {
        clock_t start, end;
        start = clock();
        size_t frequency = 10;
        for (size_t i = 0; i < frequency; ++i)
        {
            ParseResult result;
            parser::parse(a, &result);
        }
        end = clock();
        double seconds  =(double)(end - start)/CLOCKS_PER_SEC;
        fprintf(stdout, "Frequency %d,Use time is: %.8f\n", frequency, seconds);
    }



    return 0;
}

bool IsFromTable(Node* nd)
{
    if (nd->nodeType_ == E_IDENTIFIER || nd->nodeType_ == E_ALIAS)
    {
        if (nd->nodeType_ == E_ALIAS &&
                nd->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS)->nodeType_ != E_IDENTIFIER)
            return false;
        if (nd->getParent()->nodeType_ == E_JOINED_TABLE ||
            nd->getParent()->nodeType_ == E_FROM_LIST ||
            nd->getParent()->nodeType_ == E_FROM_CLAUSE)
            return true;
    }
    return false;
}

bool CompareIgnoreCase(const std::string& l, const std::string& r)
{
    std::string ll = l,rr = r;
    std::transform(ll.begin(), ll.end(), ll.begin(), ::toupper);
    std::transform(rr.begin(), rr.end(), rr.begin(), ::toupper);
    return ll == rr;
}

/*
 * check environment list to find cte reference
 * */
bool CheckCTE(Entry ety, Node* tb, std::string& ret)
{
    assert( tb->nodeType_ == E_IDENTIFIER || tb->nodeType_ == E_ALIAS);
    std::string name = "";
    if (tb->nodeType_ == E_IDENTIFIER)
        name = tb->terminalToken_.str;
    else if (tb->nodeType_ == E_ALIAS)
    {
        name = tb->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS)->terminalToken_.str;
    }
    assert(name.length() > 0);
    ret = name;
    Entry e = ety;
    while (e)
    {
        assert(e->self->nodeType_ == E_SELECT);
        Node* optctes = e->self->getChild(E_SELECT_OPT_WITH);
        if (optctes)
        {
            Node* ctes = optctes->getChild(E_OPT_WITH_CLAUSE_CTE_LIST);
            std::list<Node*> lsCtes;
            Node::ToList(ctes, lsCtes);
            auto find = std::find_if(lsCtes.begin(), lsCtes.end(), [name](Node* itcte){
                std::string rr = itcte->getChild(E_COMMON_TABLE_EXPR_TABLE)->terminalToken_.str;
                if (CompareIgnoreCase(name, rr))
                    return true;
            });
            if (find != lsCtes.end())
                return true;
        }
        e = e->parent;
    }
    return false;
}


