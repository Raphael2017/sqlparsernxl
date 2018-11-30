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
        case E_EXP_LIST:
        case E_SYM_LIST:
            ret = true;
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

void Node::ToList(Node* root, std::list<Node*>& ret)
{
    if (!root)
        return;
    if (!IsList(root))
        ret.push_back(root);
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
}

void Node::print(int lvl) const
{

}

std::string Node::serialize()
{
    if (nodeType_ == E_EXP_LIST)
    {
        auto length = ListLength(this);
        printf("E_EXP_LIST: %d", length);

        std::list<Node*> ll;
        ToList(this, ll);
        printf("E_EXP_LIST: %d", ll.size());
    }


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
        switch (nodeType_)
        {
            case E_NUMBER:
            {
                ret = std::to_string(terminalToken_.d);
            }
                break;
            case E_NAME:
            {
                ret = terminalToken_.str;
            }
                break;
            default:
                printf("error: unknown nodetype");
        }
    }
    if (nodeType_ == E_WHILESTMT)
    {
        ret = ret;
    }
    return ret;
}

double Node::eval()
{
    double ret = 0.0;
    switch (nodeType_)
    {
        case E_SYMBOL:
        {
            ret = getChild(E_SYMBOL_VALUE)->eval();
        }
            break;
        case E_IFSTMT_WITH_NO_ELSE:
        {

        }
            break;
        case E_IFSTMT_WITH_ELSE:
            break;
        case E_WHILESTMT:
            break;
        case E_STMT_LIST:
        {
            ret = getChild(E_LIST_ITEM)->eval();
            if (getChild(E_LIST_LIST))
                ret = getChild(E_LIST_LIST)->eval();
        }
            break;
        case E_NAME:
            break;
        case E_FUNC_DEF:
            break;
        case E_CMP_START:
            break;
        case E_CMP_M:
        {
            ret = getChild(E_CMP_L_OPERANDS)->eval() > getChild(E_CMP_R_OPERANDS)->eval() ? 1 : 0;
        }
            break;
        case E_CMP_L:
        {
            ret = getChild(E_CMP_L_OPERANDS)->eval() < getChild(E_CMP_R_OPERANDS)->eval() ? 1 : 0;
        }
            break;
        case E_CMP_NE:
        {
            ret = getChild(E_CMP_L_OPERANDS)->eval() != getChild(E_CMP_R_OPERANDS)->eval() ? 1 : 0;
        }
            break;
        case E_CMP_E:
        {
            ret = getChild(E_CMP_L_OPERANDS)->eval() == getChild(E_CMP_R_OPERANDS)->eval() ? 1 : 0;
        }
            break;
        case E_CMP_ME:
        {
            ret = getChild(E_CMP_L_OPERANDS)->eval() >= getChild(E_CMP_R_OPERANDS)->eval() ? 1 : 0;
        }
            break;
        case E_CMP_LE:
        {
            ret = getChild(E_CMP_L_OPERANDS)->eval() <= getChild(E_CMP_R_OPERANDS)->eval() ? 1 : 0;
        }
            break;
        case E_OPE_ADD:
        {
            ret = getChild(E_OPE_BINARY_L_OPERANDS)->eval() + getChild(E_OPE_BINARY_R_OPERANDS)->eval();
        }
            break;
        case E_OPE_SUB:
        {
            ret = getChild(E_OPE_BINARY_L_OPERANDS)->eval() - getChild(E_OPE_BINARY_R_OPERANDS)->eval();
        }
            break;
        case E_OPE_MUL:
        {
            ret = getChild(E_OPE_BINARY_L_OPERANDS)->eval() * getChild(E_OPE_BINARY_R_OPERANDS)->eval();
        }
            break;
        case E_OPE_DIV:
        {
            ret = getChild(E_OPE_BINARY_L_OPERANDS)->eval() / getChild(E_OPE_BINARY_R_OPERANDS)->eval();
        }
            break;
        case E_OPE_ABS:
        {
            ret = getChild(E_OPE_UNARY_OPERANDS)->eval();
            ret = ret > 0 ? ret : -ret;
        }
            break;
        case E_OPE_UMINUS:
        {
            ret = -getChild(E_OPE_UNARY_OPERANDS)->eval();
        }
            break;
        case E_EXP_WITH_PAR:
        {
            ret = getChild(E_EXP_WITH_PAR_EXP)->eval();
        }
            break;
        case E_NUMBER:
        {
            ret = terminalToken_.d;
        }
            break;
        case E_NAME_REF:
        {
            ret = symstab::instance()->lookup(getChild(E_NAME_REF_NAME)->terminalToken_.str.c_str())->getChild(E_SYMBOL_VALUE)->terminalToken_.d;
        }
            break;
        case E_ASGN:
        {
            std::string nm = getChild(E_ASGN_NAME)->terminalToken_.str;
            double v = getChild(E_ASGN_EXP)->eval();
            symstab::instance()->lookup(nm.c_str())->getChild(E_SYMBOL_VALUE)->terminalToken_.d = v;
            ret = v;
        }
            break;
        case E_IN_CALL_START:
            break;
        case E_IN_CALL_SQRT:
            break;
        case E_IN_CALL_EXP:
            break;
        case E_IN_CALL_LOG:
            break;
        case E_IN_CALL_PRINT:
            break;
        case E_DIY_CALL:
        {
            std::string nm = getChild(E_DIY_CALL_NAME)->terminalToken_.str;
            Node* explist = getChild(E_DIY_CALL_EXPLIST);   // shican

            Node* func = symstab::instance()->lookup(nm.c_str())->getChild(E_SUMB_FUNC);
            Node* symlist = func->getChild(E_FUNC_DEF_SYMLIST); // xingcan
            Node* act = func->getChild(E_FUNC_DEF_ACT);

            std::list<Node*> ll, rr;
            ToList(explist, ll);
            std::list<double > news, olds;
            for (auto e : ll)
            {
                news.push_back(e->eval());
            }

            ToList(symlist, rr);

            auto it = news.begin();
            for (auto e : rr)
            {
                olds.push_back(symstab::instance()->lookup(e->terminalToken_.str.c_str())->getChild(E_SYMBOL_VALUE)->terminalToken_.d);
                symstab::instance()->lookup(e->terminalToken_.str.c_str())->getChild(E_SYMBOL_VALUE)->terminalToken_.d = (*it);
                ++it;
            }

            ret = act->eval();

            auto it1 = olds.begin();
            for (auto e : rr)
            {
                symstab::instance()->lookup(e->terminalToken_.str.c_str())->getChild(E_SYMBOL_VALUE)->terminalToken_.d = (*it1);
                ++it1;
            }

        }
            break;
        case E_EXP_LIST:
        {
            ret = getChild(E_LIST_ITEM)->eval();
            if (getChild(E_LIST_LIST))
                ret = getChild(E_LIST_LIST)->eval();
        }
            break;
        case E_SYM_LIST:
        {
            getChild(E_LIST_ITEM)->eval();
            if (getChild(E_LIST_LIST))
                getChild(E_LIST_LIST)->eval();
        }
            break;
        default:
            yyerror("unknown type %d\n", nodeType_);
    }
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

symstab* symstab::ins_ = nullptr;

symstab* symstab::instance()
{
    if (!ins_)
        ins_ = new symstab;
    return ins_;
}

Node* symstab::lookup(const char * sym)
{
    auto it = data_.find(sym);
    if (it == data_.end())
    {
        Node* num = Node::makeTerminalNode(E_NUMBER);
        num->terminalToken_.d = 0.0;
        Node* nd = Node::makeNonTerminalNode(E_SYMBOL, 2, num, nullptr);
        data_[sym] = nd;
    }
    return data_[sym];
}

void yyerror(char* s, ...)
{
    va_list ap;
    va_start(ap, s);
    fprintf(stderr, "%d: error: ", yylineno);
    vfprintf(stderr, s, ap);
    fprintf(stderr, "\n");
}

