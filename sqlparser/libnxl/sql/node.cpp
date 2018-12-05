#include "node.h"
#include "math.h"
#include <stdarg.h>
#include "sqlparser_bison.h"

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

std::string Node::serialize()
{
    std::string ret = "";
    if (!isTerminalToken)
    {
        size_t childnum = children_.size();
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

std::string Node::serialize_non_recursive()
{

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

int Node::GetKey(std::string f)
{
    if (f.length() < 3 || f.front() != '{' || f.back() != '}')
        return -1;
    std::string n(f.begin()+1, f.end()-1);
    return std::atoi(n.c_str());
}



