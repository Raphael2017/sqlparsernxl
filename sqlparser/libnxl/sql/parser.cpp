#include "parser.h"
#include "sqlparser_bison.h"
#include "sqlparser_flex.h"

bool parser::parse(const std::string& sql, ParseResult* result)
{
    yyscan_t scanner;
    YY_BUFFER_STATE state;

    if (yylex_init(&scanner) || yylex_init_extra(result, &scanner)) {
        fprintf(stderr, "SQLParser: Error when initializing lexer!\n");
        return false;
    }

    const char* text = sql.c_str();
    state = yy_scan_string(text, scanner);

    // Parse the tokens.
    // If parsing fails, the result will contain an error object.
    int ret = yyparse(result, scanner);
    bool success = (ret == 0);

    return true;
}

bool parser::tokenize(const std::string& sql, std::vector<yytokentype>* tokens)
{
    ParseResult result;
    yyscan_t scanner;
    if (yylex_init(&scanner) || yylex_init_extra(&result, &scanner)) {
        fprintf(stderr, "SQLParser: Error when initializing lexer!\n");
        return false;
    }

    YY_BUFFER_STATE state;
    state = yy_scan_string(sql.c_str(), scanner);

    YYSTYPE yylval;
    YYLTYPE yylloc;

    // Step through the string until EOF is read.
    // Note: hsql_lex returns int, but we know that its range is within 16 bit.
    int16_t token = yylex(&yylval, &yylloc, scanner);
    yytokentype tmp = (yytokentype)token;
    while (token != END_P) {
        tokens->push_back((yytokentype)token);
        token = yylex(&yylval, &yylloc, scanner);

        tmp = (yytokentype)token;
        tmp = tmp;
    }

    return true;
}

void parser::find_node(Node* root, NodeType target, std::list<Node*>& ret)
{
    if (!root)
        return;
    if (target == root->nodeType_)
        ret.push_back(root);

    if (!root->isTerminalToken)
    {
        for (auto it : root->children_)
        {
            find_node(it, target, ret);
        }
    }
}

void parser::find_table_direct_ref(Node* root, std::list<std::string>& ret)
{
    if (!root)  return;
    switch (root->nodeType_)
    {
        case E_SELECT:
        {
            find_table_direct_ref(root->getChild(E_SELECT_FROM_LIST), ret);
        }
            break;
        case E_FROM_CLAUSE:
        {
            find_table_direct_ref(root->getChild(E_FROM_CLAUSE_FROM_LIST), ret);
        }
            break;
        case E_FROM_LIST:
        {
            find_table_direct_ref(root->getChild(E_LIST_ITEM), ret);
            find_table_direct_ref(root->getChild(E_LIST_NEXT), ret);
        }
            break;
        case E_ALIAS:
        {
            // skip child select
            if (!(root->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS)->nodeType_ == E_SELECT_WITH_PARENS))
            {
                find_table_direct_ref(root->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS), ret);
            }
        }
            break;
        case E_JOINED_TABLE:
        {
            find_table_direct_ref(root->getChild(E_JOINED_TABLE_TABLE_FACTOR_L), ret);
            find_table_direct_ref(root->getChild(E_JOINED_TABLE_TABLE_FACTOR_R), ret);
        }
            break;
        case E_JOINED_TABLE_WITH_PARENS:
        {
            find_table_direct_ref(root->getChild(E_JOINED_TABLE_WITH_PARENS_JOINED_TABLE), ret);
        }
            break;
        case E_IDENTIFIER:
        {
            ret.push_back(root->terminalToken_.str);
        }
            break;
        default:
            break;
    }
}


