#include "node.h"
#include "math.h"
#include <stdarg.h>
#include "sqlparser_bison.h"
#include "../../calculatorprox/node.h"
#include <stack>

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
    ret->children_.resize(num);
    va_start(va, num);
    for (size_t i = 0; i < num; ++i)
        ret->children_[i] = va_arg(va, Node*);
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
        case SELECT_EXPR_LIST:
        case E_EXPR_LIST:
        case E_WHEN_LIST:
        case E_FROM_LIST:
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
    for (auto child : root->children_)
    {
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

        for (int i=0 ;i<lpNode->children_.size(); i++)
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
    for (auto child : root->children_)
    {
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

        for (int i=lpNode->children_.size() - 1 ; i >= 0; i--)
        {
            stack.push(lpNode->children_[i]);
        }
    }
}

Node::Node()
{

}

Node::~Node()
{
    for (auto& nd : children_)
        delete(nd);
    children_.clear();
}

void Node::print(int lvl) const
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
        if (lpNode.node)
        {
            if (lpNode.node->isTerminalToken)
            {
                ret += lpNode.node->terminalToken_.yytex;
            }
            else
            {
                for (auto rit = lpNode.node->serialize_format.rbegin(); rit != lpNode.node->serialize_format.rend(); ++rit)
                {
                    auto str = *rit;
                    int key = GetKey(str);
                    if (-1 != key)
                    {
                        Node* child = lpNode.node->getChild(key);
                        if (child)
                        {
                            Item ii;
                            ii.node = child;
                            stack.push(ii);
                        }
                    }
                    else
                    {
                        Item ii;
                        ii.str = str;
                        stack.push(ii);
                    }
                }
            }
        }
        else
        {
            ret += lpNode.str;
        }

    }
    return ret;
}


std::string Node::serialize()
{
    std::string ret = "";
    if (!isTerminalToken)
    {
        for (auto str : serialize_format)
        {
            int key = GetKey(str);
            if (-1 != key)
            {
                Node* child = getChild(key);
                if (child)
                {
                    std::string tmp = child->serialize();
                    ret += tmp;
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

double Node::eval()
{
    double ret = 0.0;

    return ret;
}

Node* Node::getChild(int key)
{
    if (0 <= key && key < children_.size())
        return children_[key];
    else
        return nullptr;
}

bool Node::setChild(int key, Node* newchild)
{
    if (0 <= key && key < children_.size())
    {
        children_[key] = newchild;
        return true;
    }
    else
        return false;
}

void Node::find_node(Node* root, NodeType target, std::list<Node*>& ret)
{
    if (!root)
        return;
    if (target == root->nodeType_)
        ret.push_back(root);
    if (root->isTerminalToken)
        return;
    for (auto it : root->children_)
    {
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

        for (auto rit = lpNode->children_.rbegin(); rit != lpNode->children_.rend(); ++rit)
        {
            if (*rit)
                stack.push(*rit);
        }
    }
}

void Node::find_table_direct_ref(Node* root, std::list<std::string>& ret)
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

void Node::find_table_direct_ref_non_recursive(Node* root, std::list<std::string>& ret)
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

        if (lpNode->nodeType_ == E_IDENTIFIER)
        {
            ret.push_back(lpNode->terminalToken_.str);
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
            case E_ALIAS:
            {
                // skip child select
                if ((tmp = lpNode->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS)) && tmp->nodeType_ != E_SELECT_WITH_PARENS)
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

int Node::GetKey(std::string f)
{
    if (f.length() < 3 || f.front() != '{' || f.back() != '}')
        return -1;
    std::string n(f.begin()+1, f.end()-1);
    return std::atoi(n.c_str());
}



