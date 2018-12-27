#include "node.h"
#include "math.h"
#include <stdarg.h>
#include <regex>
#include <stack>
#include "sqlparser_bison.h"
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
        case E_TYPE_INTEGER:
            return "E_TYPE_INTEGER";
        case E_TYPE_BOOLEAN:
            return "E_TYPE_BOOLEAN";
        case E_TYPE_DOUBLE:
            return "E_TYPE_DOUBLE";
        case E_TYPE_DATETIME:
            return "E_TYPE_DATETIME";
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

Node* Node::makeTerminalNode(NodeType tp, const char* yytext)
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
    for (size_t i = 0; i < num; ++i)
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
        case E_EXPR_LIST:
        case E_WHEN_LIST:
        case E_FROM_LIST:
        case E_SIMPLE_IDENT_LIST:
        case E_OPT_DERIVED_COLUMN_LIST:
        case E_WITH_LIST:
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
    //for (auto child : root->children_)
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

        for (int i=0 ;i<lpNode->childrenCount_; i++)
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

void Node::print(int lvl)
{

}



std::string Node::SerializeNonRecursive(Node* root)
{
    if (!root)
        return "";
    struct Item
    {
        Node* node = nullptr;
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
                    std::vector<std::string> ss;
                    auto str = *rit;
                    if (Divide(str, ss))
                    {
                        int key = GetKey(ss[1]);
                        if (-1 != key)
                        {
                            Node* child = lpNode.node->getChild(key);
                            if (child)
                            {
                                stack.push({nullptr, ss[2]});
                                stack.push({child, ""});
                                stack.push({nullptr, ss[0]});
                            }
                        }
                        else
                        {
                            stack.push({nullptr, str});
                        }
                    }
                    else
                    {
                        stack.push({nullptr, str});
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
        for (auto str : *serialize_format)
        {
            std::vector<std::string> ss;
            if (Divide(str, ss))
            {
                int key = GetKey(ss[1]);
                if (-1 != key)
                {
                    Node* child = getChild(key);
                    if (child)
                    {
                        std::string tmp = child->serialize();
                        ret += ss[0];
                        ret += tmp;
                        ret += ss[2];
                    }
                }
                else
                {
                    ret += str;
                }
            }
            else
            {
                ret += str;
            }
        }
    }
    else
    {
        ret = terminalToken_.yytex;
    }

    return ret;
}

Node* Node::getParent()
{
    return parent_;
}

Node* Node::setParent(Node* p)
{
    assert(nullptr != p);
    parent_ = p;
}

Node* Node::getChild(int key)
{
    if (0 <= key && key < childrenCount_)
        return children_[key];
    else
        return nullptr;
}

Node** Node::getChildRef(int key)
{
    if (0 <= key && key < childrenCount_)
        return &children_[key];
    else
        return nullptr;
}

bool Node::setChild(int key, Node* newchild)
{
    if (0 <= key && key < childrenCount_)
    {
        children_[key] = newchild;
        if (newchild)
            newchild->setParent(this);
        return true;
    }
    else
        return false;
}

int Node::getChildrenCount() const
{
    return childrenCount_;
}

void Node::find_node(Node* root, NodeType target, std::list<Node*>& ret)
{
    if (!root)
        return;
    if (target == root->nodeType_)
        ret.push_back(root);
    if (root->isTerminalToken)
        return;
    for (size_t i = 0; i < root->childrenCount_; ++i)
    {
        auto it = root->children_[i];
        find_node(it, target, ret);
    }
}

void Node::find_node_non_recursive(Node* root, NodeType target, std::list<Node*>& ret)
{
    if (!root) return;
    std::stack<Node*> stack;
    stack.push(root);
    Node* lpNode = nullptr;

    while (stack.size() > 0)
    {
        lpNode = stack.top();
        stack.pop();

        if (lpNode->nodeType_ == target)
            ret.push_back(lpNode);

        if (lpNode->isTerminalToken)
            continue;

        //for (auto rit = lpNode->children_.rbegin(); rit != lpNode->children_.rend(); ++rit)
        for (size_t i = lpNode->childrenCount_ - 1; i >= 0; --i)
        {
            auto rit = lpNode->children_[i];
            if (rit)
                stack.push(rit);
        }
    }
}

void Node::find_table_direct_ref(Node* root, std::list<Node*>& ret)
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
            ret.push_back(root);
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
            ret.push_back(root);
        }
            break;
        default:
            break;
    }
}

void Node::find_table_direct_ref_non_recursive(Node* root, std::list<Node*>& ret)
{
    if (!root)
        return;

    std::stack<Node*> stack;
    stack.push(root);
    Node* lpNode = nullptr;

    while (stack.size() > 0)
    {
        lpNode = stack.top();
        stack.pop();

        if (lpNode->nodeType_ == E_IDENTIFIER || lpNode->nodeType_ == E_ALIAS)
        {
            ret.push_back(lpNode);
            continue;
        }

        Node* tmp;
        switch (lpNode->nodeType_)
        {
            case E_SELECT:
            {
                if ((tmp = lpNode->getChild(E_SELECT_FROM_LIST)))
                    stack.push(tmp);
            }
                break;
            case E_FROM_CLAUSE:
            {
                if ((tmp = lpNode->getChild(E_FROM_CLAUSE_FROM_LIST)))
                    stack.push(tmp);
            }
                break;
            case E_FROM_LIST:
            {
                if ((tmp = lpNode->getChild(E_LIST_NEXT)))
                    stack.push(tmp);
                if ((tmp = lpNode->getChild(E_LIST_ITEM)))
                    stack.push(tmp);
            }
                break;
            case E_JOINED_TABLE:
            {
                if ((tmp = lpNode->getChild(E_JOINED_TABLE_TABLE_FACTOR_R)))
                    stack.push(tmp);
                if ((tmp = lpNode->getChild(E_JOINED_TABLE_TABLE_FACTOR_L)))
                    stack.push(tmp);
            }
                break;
            case E_JOINED_TABLE_WITH_PARENS:
            {
                if ((tmp = lpNode->getChild(E_JOINED_TABLE_WITH_PARENS_JOINED_TABLE)))
                    stack.push(tmp);
            }
                break;
            default:
                break;
        }
    }
}

void Node::find_table_direct_ref(Node** root, std::list<Node**>& ret)
{
    if (!root || !*root)  return;
    switch ((*root)->nodeType_)
    {
        case E_SELECT:
        {
            find_table_direct_ref((*root)->getChildRef(E_SELECT_FROM_LIST), ret);
        }
            break;
        case E_FROM_CLAUSE:
        {
            find_table_direct_ref((*root)->getChildRef(E_FROM_CLAUSE_FROM_LIST), ret);
        }
            break;
        case E_FROM_LIST:
        {
            find_table_direct_ref((*root)->getChildRef(E_LIST_ITEM), ret);
            find_table_direct_ref((*root)->getChildRef(E_LIST_NEXT), ret);
        }
            break;
        case E_ALIAS:
        {
            ret.push_back(root);
        }
            break;
        case E_JOINED_TABLE:
        {
            find_table_direct_ref((*root)->getChildRef(E_JOINED_TABLE_TABLE_FACTOR_L), ret);
            find_table_direct_ref((*root)->getChildRef(E_JOINED_TABLE_TABLE_FACTOR_R), ret);
        }
            break;
        case E_JOINED_TABLE_WITH_PARENS:
        {
            find_table_direct_ref((*root)->getChildRef(E_JOINED_TABLE_WITH_PARENS_JOINED_TABLE), ret);
        }
            break;
        case E_IDENTIFIER:
        {
            ret.push_back(root);
        }
            break;
        default:
            break;
    }
}

void Node::find_table_direct_ref_non_recursive(Node** root, std::list<Node**>& ret)
{
    if (!root || !*root)
        return;

    std::stack<Node**> stack;
    stack.push(root);
    Node** lpNode = nullptr;

    while (stack.size() > 0)
    {
        lpNode = stack.top();
        stack.pop();

        if (!lpNode || !*lpNode) continue;
        if ((*lpNode)->nodeType_ == E_IDENTIFIER || (*lpNode)->nodeType_ == E_ALIAS)
        {
            ret.push_back(lpNode);
            continue;
        }

        Node** tmp;
        switch ((*lpNode)->nodeType_)
        {
            case E_SELECT:
            {
                if ((tmp = (*lpNode)->getChildRef(E_SELECT_FROM_LIST)))
                    stack.push(tmp);
            }
                break;
            case E_FROM_CLAUSE:
            {
                if ((tmp = (*lpNode)->getChildRef(E_FROM_CLAUSE_FROM_LIST)))
                    stack.push(tmp);
            }
                break;
            case E_FROM_LIST:
            {
                if ((tmp = (*lpNode)->getChildRef(E_LIST_NEXT)))
                    stack.push(tmp);
                if ((tmp = (*lpNode)->getChildRef(E_LIST_ITEM)))
                    stack.push(tmp);
            }
                break;
            case E_JOINED_TABLE:
            {
                if ((tmp = (*lpNode)->getChildRef(E_JOINED_TABLE_TABLE_FACTOR_R)))
                    stack.push(tmp);
                if ((tmp = (*lpNode)->getChildRef(E_JOINED_TABLE_TABLE_FACTOR_L)))
                    stack.push(tmp);
            }
                break;
            case E_JOINED_TABLE_WITH_PARENS:
            {
                if ((tmp = (*lpNode)->getChildRef(E_JOINED_TABLE_WITH_PARENS_JOINED_TABLE)))
                    stack.push(tmp);
            }
                break;
            default:
                break;
        }
    }
}

int Node::GetKey(const std::string& f)
{
    if (f.length() < 3 || f.front() != '{' || f.back() != '}')
        return -1;
    std::string n(f.begin()+1, f.end()-1);
    return std::atoi(n.c_str());
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
        if (l != 0)
            ret.push_back(f.substr(0, l));
        else
            ret.push_back("");
        ret.push_back(f.substr(l, r - l + 1));
        if (r != (f.length() - 1))
            ret.push_back(f.substr(r + 1));
        else
            ret.push_back("");
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

void Node::TreePreOrderVisit(Node* root, const std::function<void(Node*, Entry)>& f)
{
    if (!root)
        return;
    Entry ety = nullptr;
    std::set<Entry> etys;
    _visit(root, ety, etys, f);
    for (auto it : etys)
        delete(it);
    etys.clear();
}

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

void Node::_visit(Node* root, Entry ety, std::set<Entry>& etys, const std::function<void(Node*, Entry)>& f)
{
    if (!root) return;
    if (root->nodeType_ == E_SELECT)
    {
        ety = new Environment{root, ety};
        etys.insert(ety);
    }
    f(root, ety);
    for (size_t i = 0; i < root->childrenCount_; ++i)
    {
        _visit(root->children_[i], ety, etys, f);
    }
}
