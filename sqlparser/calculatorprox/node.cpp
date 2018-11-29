#include "node.h"
#include <stdarg.h>

Node* Node::makeTerminalNode(NodeType tp)
{
    Node* ret = new Node;
    ret->nodeType_ = tp;
    ret->isTerminalToken = true;
    return ret;
}

Node* Node::makeNonTerminalNode(NodeType tp, int num, ...)
{
    Node* ret = new Node;
    ret->nodeType_ = tp;
    ret->isTerminalToken = false;

    va_list va;
    ret->children_.reserve(num);
    va_start(va, num);
    for (size_t i = 0; i < num; ++i)
        ret->children_[i] = va_arg(va, Node*);
    va_end(va);

    return ret;
}

Node::Node()
{

}

Node::~Node()
{
    for (auto& nd : children_)
        delete(nd);
}

void Node::print(int lvl) const
{

}

std::string Node::serialize() const
{

}