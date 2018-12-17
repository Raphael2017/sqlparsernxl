#include "parser.h"
#include <algorithm>
#include <time.h>

Node* protect_exp(const std::string& tableName, bool isWithParens)
{
    /* SUPPLIER.NXLFIELD1 >= 10 AND SUPPLIER.NXLFIELD2 <> 5 */
    Node* f1 = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2,
            Node::makeTerminalNode(E_IDENTIFIER, tableName.c_str()),
            Node::makeTerminalNode(E_IDENTIFIER, "NXLFIELD1"));
    f1->serialize_format = &NAME_FIELD_SERIALIZE_FORMAT;
    Node* f2 = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2,
             Node::makeTerminalNode(E_IDENTIFIER, tableName.c_str()),
             Node::makeTerminalNode(E_IDENTIFIER, "NXLFIELD2"));
    f2->serialize_format = &NAME_FIELD_SERIALIZE_FORMAT;

    Node* c1 = Node::makeNonTerminalNode(E_OP_GE, 2,
            f1,
            Node::makeTerminalNode(E_INT, "10"));
    c1->serialize_format = &OP_GE_SERIALIZE_FORMAT;

    Node* c2 = Node::makeNonTerminalNode(E_OP_NE, 2,
            f2,
            Node::makeTerminalNode(E_INT, "5"));
    c2->serialize_format = &OP_NE_SERIALIZE_FORMAT;


    Node* exp = Node::makeNonTerminalNode(E_OP_AND, 2, c1, c2);
    exp->serialize_format = &OP_AND_SERIALIZE_FORMAT;

    if (!isWithParens)
    {
        return exp;
    }

    Node* ret = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, exp);
    ret->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;


    return ret;
}

Node* protect_sel(const std::string& tableName_, const std::string& aliasName, Node*& node);

void protect(Node* root);

void ffd_(Node* root, NodeType target, std::list<Node*>& ret);

int main()
{
    std::string a = "";


    a = "SELECT last_name, \n"
        "       job_id, \n"
        "       salary \n"
        "FROM   employees, bosses\n"
        "WHERE  job_id = (SELECT job_id \n"
        "                 FROM   employees as employees_new \n"
        "                 WHERE  employees_new.employee_id = 141) \n"
        "       AND salary > (SELECT salary \n"
        "                     FROM   employees \n"
        "                     WHERE  employee_id = 141);\n"
            ;
    a = "SELECT CNTRYCODE, COUNT(*) AS NUMCUST, SUM(C_ACCTBAL) AS TOTACCTBAL\n"
        "FROM (SELECT SUBSTRING(C_PHONE,1,2) AS CNTRYCODE, C_ACCTBAL\n"
        " FROM CUSTOMER WHERE SUBSTRING(C_PHONE,1,2) IN ('13', '31', '23', '29', '30', '18', '17') AND\n"
        " C_ACCTBAL > (SELECT AVG(C_ACCTBAL) FROM CUSTOMER WHERE C_ACCTBAL > 0.00 AND\n"
        "  SUBSTRING(C_PHONE,1,2) IN ('13', '31', '23', '29', '30', '18', '17')) AND\n"
        " NOT EXISTS ( SELECT * FROM ORDERS WHERE O_CUSTKEY = C_CUSTKEY)) AS CUSTSALE\n"
        "GROUP BY CNTRYCODE\n"
        "ORDER BY CNTRYCODE;";

    a = "-- COMMON TABLE EXPRESSION\n"
        "WITH cte1 (avg_c_acctbal)\n"
        "     AS (SELECT Avg(c_acctbal)\n"
        "         FROM   customer\n"
        "         WHERE  c_acctbal > 0.00\n"
        "                AND Substring(c_phone, 1, 2) IN ( '13', '31', '23', '29',\n"
        "                                                  '30', '18', '17' )),\n"
        "     cte2\n"
        "     AS (SELECT *\n"
        "         FROM   orders\n"
        "         WHERE  o_custkey = c_custkey),\n"
        "     cte3 (cntrycode, c_acctbal)\n"
        "     AS (SELECT Substring(c_phone, 1, 2) AS CNTRYCODE,\n"
        "                c_acctbal\n"
        "         FROM   customer\n"
        "         WHERE  Substring(c_phone, 1, 2) IN ( '13', '31', '23', '29',\n"
        "                                              '30', '18', '17' )\n"
        "                AND c_acctbal > (SELECT avg_c_acctbal\n"
        "                                 FROM   cte1)\n"
        "                AND NOT EXISTS (SELECT *\n"
        "                                FROM   cte2))\n"
        "SELECT cntrycode,\n"
        "       Count(*)       AS NUMCUST,\n"
        "       Sum(c_acctbal) AS TOTACCTBAL\n"
        "FROM   cte3 AS CUSTSALE,\n"
        "       NXLDIY\n "
        "GROUP  BY cntrycode\n"
        "ORDER  BY cntrycode;";

    {
        ParseResult result;
        std::vector<yytokentype> tks;
        parser::parse(a, &result);
        if (result.accept)
            printf("%s\n", result.result_tree_->serialize().c_str());
        if (result.accept)
        {
            Node::visit(result.result_tree_, [](Node* nd){
                /*
                std::list<NodeType> ls;
                Node* cur = nd;
                while (nullptr != nd)
                {
                    ls.push_front(nd->nodeType_);
                    nd = nd->getParent();
                }
                for (auto it : ls)
                {
                    //printf("%s, ", NodeTypeToString(it).c_str());
                }*/
                if (!nd) return;
                if (nd->nodeType_ == E_IDENTIFIER )
                {
                    if (nd->getParent()->nodeType_ == E_FROM_LIST || nd->getParent()->nodeType_ == E_FROM_CLAUSE)
                    {
                        printf("  %s\n", nd->terminalToken_.str.c_str());
                    }
                }
                else if (nd->nodeType_ == E_ALIAS)
                {
                    if (nd->getParent()->nodeType_ == E_FROM_LIST || nd->getParent()->nodeType_ == E_FROM_CLAUSE)
                    {
                        Node* tmp = nd->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS);
                        if (tmp && tmp->nodeType_ == E_IDENTIFIER);
                            printf("  %s\n", tmp->terminalToken_.str.c_str());
                    }
                }
                //printf("\n");
            });
        }
    }

    {
        clock_t start, end;
        start = clock();
        size_t frequency = 10000;
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

Node* protect_sel(const std::string& tableName_, const std::string& aliasName, Node*& node)
{
    std::string tableName = tableName_;
    std::transform(tableName_.begin(), tableName_.end(), tableName.begin(), ::toupper);
    if (tableName == "CUSTOMER")
    {
        // SELECT * from tableName where tableName.NXLFIELD1 >= 10 AND tableName.NXLFIELD2 <> 5
        std::string sql = "(SELECT * FROM " + tableName + " WHERE " + tableName + ".NXLFIELD1 >= 10 AND " + tableName + ".NXLFIELD2 <> 5)";
        ParseResult ret;
        parser::parse(sql, &ret);
        Node* nm = Node::makeTerminalNode(E_IDENTIFIER, aliasName.c_str());
        Node* result = Node::makeNonTerminalNode(E_ALIAS, 2, ret.result_tree_, nm);
        result->serialize_format = &ALIAS_2_SERIALIZE_FORMAT;
        Node* ori = node;
        node = result;
        return ori;
    }
    else if (tableName == "ORDERS")
    {
        // SELECT * from tableName where tableName.NXLFIELD3 < 3 AND tableName.NXLFIELD4 > 4
        std::string sql = "(SELECT * FROM " + tableName + " WHERE " + tableName + ".NXLFIELD3 >= 10 AND " + tableName + ".NXLFIELD4 <> 5)";
        ParseResult ret;
        parser::parse(sql, &ret);
        Node* nm = Node::makeTerminalNode(E_IDENTIFIER, aliasName.c_str());
        Node* result = Node::makeNonTerminalNode(E_ALIAS, 2, ret.result_tree_, nm);
        result->serialize_format = &ALIAS_2_SERIALIZE_FORMAT;
        Node* ori = node;
        node = result;
        return ori;
    }
    else
    {
        return nullptr;
    }
}

void protect(Node* root)
{
    if (!root)
        return;

    std::list<Node*> ss;
    Node::find_node_non_recursive(root, E_SELECT, ss);

    for (auto selit : ss)
    {
        std::list<Node**> table_direct_ref;
        Node::find_table_direct_ref_non_recursive(&selit, table_direct_ref);
        for (auto tb : table_direct_ref)
        {
            switch ((*tb)->nodeType_)
            {
                case E_ALIAS:
                {
                    Node* tbname = (*tb)->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS);
                    if (tbname->nodeType_ == E_IDENTIFIER)
                    {
                        std::string aliasName = (*tb)->getChild(E_ALIAS_RELATION_NAME)->terminalToken_.str;
                        Node* ori = protect_sel(tbname->terminalToken_.str, aliasName, *tb);
                        delete(ori);
                    }
                }
                    break;
                case E_IDENTIFIER:
                {
                    Node* ori = protect_sel((*tb)->terminalToken_.str, (*tb)->terminalToken_.str, *tb);
                    delete(ori);
                }
                    break;
                default:
                    break;
            }
        }
    }

}

