#include "node.h"
#include "math.h"
#include <stdarg.h>
#include <regex>
#include <stack>
#include "sqlparser_sql2003_bison.h"
#include <assert.h>

std::string NodeTypeToString(NodeType tp)
{
    switch (tp)
    {
        case E_NULL:
            return "E_NULL";
        case E_INT:
            return "E_INT";
        case E_DOUBLE:
            return "E_DOUBLE";
        case E_BOOL:
            return "E_BOOL";
        case E_STRING:
            return "E_STRING";
        case E_IDENTIFIER:
            return "E_IDENTIFIER";
        case E_QUESTIONMARK:
            return "E_QUESTIONMARK";
        case E_ALL:
            return "E_ALL";
        case E_DISTINCT:
            return "E_DISTINCT";
        case E_STAR:
            return "E_STAR";
        case E_DATA_TYPE:
            return "E_DATA_TYPE";
        case E_SET_UNION:
            return "E_SET_UNION";
        case E_SET_INTERSECT:
            return "E_SET_INTERSECT";
        case E_SET_EXCEPT:
            return "E_SET_EXCEPT";
        case E_SORT_ASC:
            return "E_SORT_ASC";
        case E_SORT_DESC:
            return "E_SORT_DESC";
        case E_JOIN_INNER:
            return "E_JOIN_INNER";
        case E_JOIN_FULL:
            return "E_JOIN_FULL";
        case E_JOIN_LEFT:
            return "E_JOIN_LEFT";
        case E_JOIN_RIGHT:
            return "E_JOIN_RIGHT";
        case E_JOIN_CROSS:
            return "E_JOIN_CROSS";
        case E_JOIN_NATURAL:
            return "E_JOIN_NATURAL";
        case E_STMT_LIST:
            return "E_STMT_LIST";
        case E_SELECT:
            return "E_SELECT";
        case E_SELECT_WITH_PARENS:
            return "E_SELECT_WITH_PARENS";
        case E_FROM_CLAUSE:
            return "E_FROM_CLAUSE";
        case E_WHERE_CLAUSE:
            return "E_WHERE_CLAUSE";
        case E_LIMIT_CLAUSE:
            return "E_LIMIT_CLAUSE";
        case E_GROUP_BY:
            return "E_GROUP_BY";
        case E_ORDER_BY:
            return "E_ORDER_BY";
        case E_HAVING:
            return "E_HAVING";
        case E_WHEN:
            return "E_WHEN";
        case E_SORT_LIST:
            return "E_SORT_LIST";
        case E_SORT_KEY:
            return "E_SORT_KEY";
        case E_SELECT_EXPR_LIST:
            return "E_SELECT_EXPR_LIST";
        case E_PROJECT_STRING:
            return "E_PROJECT_STRING";
        case E_ALIAS:
            return "E_ALIAS";
        case E_FROM_LIST:
            return "E_FROM_LIST";
        case E_JOINED_TABLE:
            return "E_JOINED_TABLE";
        case E_JOINED_TABLE_WITH_PARENS:
            return "E_JOINED_TABLE_WITH_PARENS";
        case E_OP_NAME_FIELD:
            return "E_OP_NAME_FIELD";
        case E_OP_EXISTS:
            return "E_OP_EXISTS";
        case E_OP_POS:
            return "E_OP_POS";
        case E_OP_NEG:
            return "E_OP_NEG";
        case E_OP_ADD:
            return "E_OP_ADD";
        case E_OP_MINUS:
            return "E_OP_MINUS";
        case E_OP_MUL:
            return "E_OP_MUL";
        case E_OP_DIV:
            return "E_OP_DIV";
        case E_OP_REM:
            return "E_OP_REM";
        case E_OP_POW:
            return "E_OP_POW";
        case E_OP_MOD:
            return "E_OP_MOD";
        case E_OP_LE:
            return "E_OP_LE";
        case E_OP_LT:
            return "E_OP_LT";
        case E_OP_EQ:
            return "E_OP_EQ";
        case E_OP_GE:
            return "E_OP_GE";
        case E_OP_GT:
            return "E_OP_GT";
        case E_OP_NE:
            return "E_OP_NE";
        case E_OP_LIKE:
            return "E_OP_LIKE";
        case E_OP_NOT_LIKE:
            return "E_OP_NOT_LIKE";
        case E_OP_AND:
            return "E_OP_AND";
        case E_OP_OR:
            return "E_OP_OR";
        case E_OP_NOT:
            return "E_OP_NOT";
        case E_OP_IS:
            return "E_OP_IS";
        case E_OP_IS_NOT:
            return "E_OP_IS_NOT";
        case E_OP_BTW:
            return "E_OP_BTW";
        case E_OP_NOT_BTW:
            return "E_OP_NOT_BTW";
        case E_OP_IN:
            return "E_OP_IN";
        case E_OP_NOT_IN:
            return "E_OP_NOT_IN";
        case E_OP_CNN:
            return "E_OP_CNN";
        case E_EXPR_LIST:
            return "E_EXPR_LIST";
        case E_EXPR_LIST_WITH_PARENS:
            return "E_EXPR_LIST_WITH_PARENS";
        case E_CASE:
            return "E_CASE";
        case E_CASE_DEFAULT:
            return "E_CASE_DEFAULT";
        case E_FUN_CALL:
            return "E_FUN_CALL";
        case E_WHEN_LIST:
            return "E_WHEN_LIST";
        case E_TOP_CNT:
            return "E_TOP_CNT";
        case E_TOP_PCT:
            return "E_TOP_PCT";
        case E_TOP_CNT_TIES:
            return "E_TOP_CNT_TIES";
        case E_TOP_PCT_TIES:
            return "E_TOP_PCT_TIES";
        case E_SIMPLE_IDENT_LIST:
            return "E_SIMPLE_IDENT_LIST";
        case E_SIMPLE_IDENT_LIST_WITH_PARENS:
            return "E_SIMPLE_IDENT_LIST_WITH_PARENS";
        case E_OPT_DERIVED_COLUMN_LIST:
            return "E_OPT_DERIVED_COLUMN_LIST";
        case E_COMMON_TABLE_EXPR:
            return "E_COMMON_TABLE_EXPR";
        case E_WITH_LIST:
            return "E_WITH_LIST";
        case E_OPT_WITH_CLAUSE:
            return "E_OPT_WITH_CLAUSE";
        case E_TABLE_IDENT:
            return "E_TABLE_IDENT";
        case E_OFFSET_FETCH:
            return "E_OFFSET_FETCH";
        default:
            return "";
    }
}

ParseResult::ParseResult() : result_tree_(nullptr), accept(false),
    errFirstLine(0), errFirstColumn(0) {}

ParseResult::~ParseResult()
{
    delete(result_tree_);
    result_tree_ = nullptr;
}

Node* Node::makeTerminalNode(NodeType tp, const std::string& yytext)
{
    Node* ret = new Node;
    ret->nodeType_ = tp;
    ret->isTerminalToken = true;
    ret->terminalToken_.yytex = yytext;
    return ret;
}

Node* Node::makeNonTerminalNode(NodeType tp, int num, ...)
{
    Node* ret = new Node;
    ret->nodeType_ = tp;
    ret->isTerminalToken = false;

    va_list va;
#ifdef NODE_CHILDREN_DEBUG
    ret->children_.resize(num);
#else
    ret->children_ = new Node*[num];
#endif
    ret->childrenCount_ = num;
    va_start(va, num);
    for (size_t i = 0; i < (size_t)num; ++i)
    {
        Node* child = va_arg(va, Node*);
        if (child)
            child->parent_ = ret;
        ret->children_[i] = child;
    }
    va_end(va);

    return ret;
}

bool Node::IsList(Node* root)
{
    bool ret = false;
    if (!root)
        return ret;
    switch (root->nodeType_)
    {
        case E_STMT_LIST:
        case E_SORT_LIST:
        case E_SELECT_EXPR_LIST:
        case E_FROM_LIST:
        case E_EXPR_LIST:
        case E_WHEN_LIST:
        case E_SIMPLE_IDENT_LIST:
        case E_WITH_LIST:
        case E_TABLE_HINT_LIST:
        case E_QUERY_HINT_LIST:
        case E_EXPR_LIST_PARENS_LIST:
        case E_UPDATE_ELEM_LIST:
        case E_DML_SELECT_LIST:
        case E_OPT_DERIVED_COLUMN_LIST:
        {
            ret = true;
        }
            break;
        default:
            ret = false;
    }
    return ret;
}

int Node::ListLength(Node* root)
{
    if (!root)
        return 0;
    if (!IsList(root))
        return 1;
    int cnt = 0;
    for (size_t i = 0; i < root->childrenCount_; ++i)
    {
        auto child = root->children_[i];
        if (child->nodeType_ == root->nodeType_)
        {
            cnt += ListLength(child);
        }
        else
        {
            cnt++;
        }
    }
    return cnt;
}

int Node::ListLengthNonRecursive(Node* root)
{
    if (!root)
        return 0;
    int ret = 0;
    std::stack<Node*> stack;
    stack.push(root);
    Node *lpNode;

    while(!stack.empty())
    {
        lpNode = stack.top();
        stack.pop();

        if(!lpNode)
        {
            continue;
        }
        else if (!IsList(lpNode))
        {
            ret++;
            continue;
        }

        for (size_t i = 0; i < lpNode->childrenCount_; i++)
        {
            stack.push(lpNode->children_[i]);
        }
    }
    return ret;
}


void Node::ToList(Node* root, std::list<Node*>& ret)
{
    if (!root)
        return;
    if (!IsList(root))
        return ret.push_back(root);
    for (size_t i = 0; i < root->childrenCount_; ++i)
    {
        auto child = root->children_[i];
        if (!child) continue;
        if (child->nodeType_ == root->nodeType_)
        {
            ToList(child, ret);
        }
        else
        {
            ret.push_back(child);
        }
    }
}

void Node::ToListNonRecursive(Node* root, std::list<Node*>& ret)
{
    if (!root)
        return;
    std::stack<Node*> stack;
    stack.push(root);
    Node *lpNode;

    while(!stack.empty())
    {
        lpNode = stack.top();
        stack.pop();

        if(!lpNode)
        {
            continue;
        }
        else if (!IsList(lpNode))
        {
            ret.push_back(lpNode);
            continue;
        }

        for (int i=lpNode->childrenCount_ - 1 ; i >= 0; i--)
        {
            stack.push(lpNode->children_[i]);
        }
    }
}

Node::Node() : serialize_format(nullptr),
#ifdef NODE_CHILDREN_DEBUG
#else
        children_(nullptr),
#endif
childrenCount_(0),
parent_(nullptr)
{

}

Node::~Node()
{
    //for (auto& nd : children_)
    for (size_t i = 0; i < childrenCount_; ++i)
    {
        auto& nd = children_[i];
        delete(nd);
        nd = nullptr;
    }
#ifdef NODE_CHILDREN_DEBUG
    children_.clear();
#else
    delete[] children_;
    children_ = nullptr;
#endif
    childrenCount_ = 0;
}

void Node::print(Node* root, int lvl /*= 0*/)
{
    for (int i = 0; i < lvl; ++i)
    {
        fprintf(stderr, "    ");
    }
    if (!root)
    {
        fprintf(stderr, "|-> NIL\n");
        return;
    }
    fprintf(stderr, "|-> %s", NodeTypeToString(root->nodeType_).c_str());
    if (root->isTerminalToken)
    {
        fprintf(stderr , " : %s\n", root->terminalToken_.yytex.c_str());
    }
    else
    {   fprintf(stderr, "\n");
        for (size_t i = 0; i < root->childrenCount_; ++i)
        {
            print(root->getChild(i), 1 + lvl);
        }
    }
}

#ifndef S_F_2
#else
std::string Node::SerializeNonRecursive(Node* root)
{
    if (!root)
        return "";
    struct Item
    {
        Node* node;
        std::string str;
    };

    std::string ret = "";
    std::stack<Item> stack;
    Item lpNode;

    Item tt;
    tt.node = root;
    stack.push(tt);
    while (stack.size() > 0)
    {
        lpNode = stack.top();
        stack.pop();
        std::string tmp = "";
        if (lpNode.node)
        {

            if (lpNode.node->isTerminalToken)
            {
                tmp = lpNode.node->terminalToken_.yytex;
            }
            else
            {
                for (auto rit = lpNode.node->serialize_format->rbegin();
                     rit != lpNode.node->serialize_format->rend(); ++rit)
                {
                    if (rit->is_simple == 1)
                    {
                        stack.push({nullptr, rit->s0});
                    }
                    else
                    {
                        Node* child = lpNode.node->getChild(rit->key);
                        if (child)
                        {
                            if (rit->s2.length() > 0) stack.push({nullptr, rit->s2});
                            stack.push({child, ""});
                            if (rit->s0.length() > 0) stack.push({nullptr, rit->s0});
                        }
                    }
                }
            }
        }
        else
        {
            tmp = lpNode.str;
        }
        if (tmp.length() > 0)
        {
            ret += tmp;
        }
    }
    return ret;
}

std::string Node::serialize()
{
    std::string ret = "";
    if (!isTerminalToken)
    {
        for (auto info : *serialize_format)
        {
            if (info.is_simple == 1)
            {
                ret += info.s0;
            }
            else
            {
                Node* child = getChild(info.key);
                if (child)
                {
                    ret += info.s0;
                    ret += child->serialize();
                    ret += info.s2;
                }
            }
        }
    }
    else
    {
        ret = terminalToken_.yytex;
    }

    return ret;
}

#endif

Node* Node::getParent()
{
    return parent_;
}

Node* Node::setParent(Node* p)
{
    assert(nullptr != p);
    parent_ = p;
    return this;
}

Node* Node::getChild(int key)
{
    if (0 <= (size_t)key && (size_t)key < childrenCount_)
        return children_[key];
    else
        return nullptr;
}

Node** Node::getChildRef(int key)
{
    if (0 <= (size_t)key && (size_t)key < childrenCount_)
        return &children_[key];
    else
        return nullptr;
}

bool Node::setChild(int key, Node* newchild)
{
    if (0 <= (size_t)key && (size_t)key < childrenCount_)
    {
        children_[key] = newchild;
        if (newchild)
            newchild->setParent(this);
        return true;
    }
    else
        return false;
}

size_t Node::getChildrenCount() const
{
    return childrenCount_;
}

std::string Node::text()
{
    if(isTerminalToken)
        return terminalToken_.yytex;
    else
        return serialize();
}

void Node::set_text(const std::string& new_text)
{
    assert(isTerminalToken);
    terminalToken_.yytex = new_text;
}

int Node::GetKey(const std::string& f)
{
    if (f.length() < 3 || f.front() != '{' || f.back() != '}')
        return -1;
    return std::atoi(f.substr(1, f.length() - 2).c_str());
}

#if 1
//High efficiency
bool Node::Divide(const std::string& f, std::vector<std::string>& ret)
{
    auto l = f.find("{");
    auto r = f.find("}");
    if (l == std::string::npos || r == std::string::npos)
        return false;
    else
    {
        ret.push_back(f.substr(0, l));
        ret.push_back(f.substr(l, r - l + 1));
        ret.push_back(f.substr(r + 1));
    }
    return true;
}
#else
// has efficiency problem why ? maybe std::regex
bool Node::Divide(const std::string& f, std::vector<std::string>& ret)
{
    std::string text(f);
    std::regex express("\\{[0-9]+\\}");
    std::match_results<std::string::iterator> results1;
    if(!std::regex_search(text.begin(), text.end(), results1, express) || 1 != results1.size())
        return false;

    auto l = results1.position(0);
    auto r = l + results1.length();
    ret.push_back(f.substr(0, l));
    ret.push_back(results1[0].str());
    ret.push_back(f.substr(r));
    return true;
}
#endif

Node* Node::remove_parens(Node* node)
{
    while (is_with_parens(node))
    {
        node = node->getChild(0);
    }
    return node;
}

bool Node::is_with_parens(Node* node)
{
    assert(node);
    bool ret = false;
    switch (node->nodeType_)
    {
        case E_SELECT_WITH_PARENS:
        case E_JOINED_TABLE_WITH_PARENS:
        case E_EXPR_LIST_WITH_PARENS:
        case E_SIMPLE_IDENT_LIST_WITH_PARENS:
            ret = true;
            break;
        default:
            ret = false;

    }
    return ret;
}

#if 1
Node* Node::addjust_cross_join(Node* root, Node* cj)
{
    assert(cj->nodeType_ == E_JOINED_TABLE);
    assert(cj->getChild(E_JOINED_TABLE_TABLE_FACTOR_R) == nullptr);
    cj->setChild(E_JOINED_TABLE_TABLE_FACTOR_R, root);
    return cj;
}
#else
Node* Node::addjust_cross_join(Node* root, Node* cj)
{
    assert(cj->nodeType_ == E_JOINED_TABLE);
    assert(cj->getChild(E_JOINED_TABLE_TABLE_FACTOR_R) == nullptr);
    if (root->nodeType_ == E_JOINED_TABLE)
    {
        Node* l = root->getChild(E_JOINED_TABLE_TABLE_FACTOR_L);
        assert(l != nullptr);
        root->setChild(E_JOINED_TABLE_TABLE_FACTOR_L, addjust_cross_join(l, cj));
        return root;
    }
    else
    {
        cj->setChild(E_JOINED_TABLE_TABLE_FACTOR_R, root);
        return cj;
    }
}
#endif

Node* Node::check_expr_is_column_alias(Node* root)
{
    if (root->nodeType_ == E_OP_EQ)
    {
        Node* left = root->getChild(E_OP_BINARY_OPERAND_L);
        Node* right = root->getChild(E_OP_BINARY_OPERAND_R);
        assert(left != nullptr && right != nullptr);
        if (left->nodeType_ == E_OP_NAME_FIELD &&
        left->getChild(0) != nullptr && left->getChild(0)->nodeType_ == E_IDENTIFIER &&
        left->getChild(1) == nullptr && left->getChild(2) == nullptr &&
        left->getChild(3) == nullptr && left->getChild(4) == nullptr)
        {
            // this is a column_alias
            std::string alias_name = left->getChild(0)->terminalToken_.str;
            Node* alias = makeTerminalNode(E_IDENTIFIER, alias_name);
            alias->terminalToken_.str = alias_name;
            Node* ret = makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT,
                    right, alias, nullptr, nullptr, nullptr);
            ret->serialize_format = &AS_SERIALIZE_FORMAT;
            root->setChild(E_OP_BINARY_OPERAND_R, nullptr);
            delete(root);
            return ret;
        }
        else
        {
            // maybe here is an grammar error
        }
    }
    return root;
}

bool  Node::check_expr_table_hint(Node* root)
{
    if (root->nodeType_ == E_IDENTIFIER)
    {
        std::string word = root->terminalToken_.str;
        std::transform(word.begin(), word.end(), word.begin(), ::toupper);
        if (TABLE_HINT_WORDS.find(word) == TABLE_HINT_WORDS.end())
            return false;
        return true;
    }
    else if (root->nodeType_ == E_OP_EQ)
    {
        Node* l = root->getChild(E_OP_BINARY_OPERAND_L);
        assert(l);
        if (l->nodeType_ != E_IDENTIFIER)
            return false;
        std::string word = l->terminalToken_.str;
        std::transform(word.begin(), word.end(), word.begin(), ::toupper);
        if ("INDEX" != word && "SPATIAL_WINDOW_MAX_CELLS" != word)
            return false;
        return true;
    }
    else if (root->nodeType_ == E_FUN_CALL)
    {
        Node* l = root->getChild(0);
        assert(l && l->nodeType_ == E_IDENTIFIER);
        std::string word = l->terminalToken_.str;
        std::transform(word.begin(), word.end(), word.begin(), ::toupper);
        if ("INDEX" != word)
            return false;
        return true;
    }
    return false;
}

std::string Node::convert_join_hint(int ival)
{
    switch (ival)
    {
        case 0:
            return "";
        case 1:
            return " LOOP";
        case 2:
            return " HASH";
        case 3:
            return " MERGE";
        default:
            return " REMOTE";
            /*unreachable*/
            assert(0);
    }
}

Node* Node::make_query_hint(const std::string& text)
{
    return makeTerminalNode(E_STRING, text);
}

Node* Node::make_query_hint(const std::string& text, Node* num)
{
    Node* nd = makeTerminalNode(E_STRING, text);
    Node* ret = makeNonTerminalNode(E_QUERY_HINT, E_QUERY_HINT_PROPERTY_CNT, nd, num);
    ret->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
    return ret;
}

bool Node::check_update_item(Node* root, Node*& out_expr)
{
    if (root->nodeType_ == E_OP_EQ ||
        root->nodeType_ == E_OP_ASS_BIT_AND ||
        root->nodeType_ == E_OP_ASS_BIT_OR ||
        root->nodeType_ == E_OP_ASS_BIT_XOR ||
        root->nodeType_ == E_OP_ASS_ADD ||
        root->nodeType_ == E_OP_ASS_MINUS ||
        root->nodeType_ == E_OP_ASS_MUL ||
        root->nodeType_ == E_OP_ASS_DIV ||
        root->nodeType_ == E_OP_ASS_REM)
    {
        // check NAME ... NAME assign expr
        //       @variable assign expr
        Node* l = root->getChild(E_OP_BINARY_OPERAND_L);
        out_expr = root->getChild(E_OP_BINARY_OPERAND_R);
        switch (l->nodeType_)
        {
            case E_OP_NAME_FIELD:
            {
                Node* column = l->getChild(E_OP_NAME_FIELD_COLUMN_NAME);
                assert(column != nullptr);
                return column->nodeType_ != E_STAR;
            }
                break;
            case E_OP_EQ:
            {
                Node* var = l->getChild(E_OP_BINARY_OPERAND_L);
                Node* column = l->getChild(E_OP_BINARY_OPERAND_R);
                assert(var != nullptr);
                assert(column != nullptr);
                return var->nodeType_ == E_TEMP_VARIABLE &&
                    column->nodeType_ == E_OP_NAME_FIELD;
            }
                break;
            default:
                return false;
        }
    }
    else if (root->nodeType_ == E_FUN_CALL)
    {
        // check format like NAME.NAME(...)
        Node* func = root->getChild(0);
        if (func->nodeType_ == E_PROC_IDENT &&
            func->getChild(0) && func->getChild(1) &&
            !func->getChild(2) && func->getChild(3))
        {
            return true;
        }
    }
    return false;
}

