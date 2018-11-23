#include "ast.h"
#include <stdio.h>

void yyerror(char* s, ...)
{

}

node* node::newexp(int nodetype, node* l, node* r)
{
    exp* ret = new exp;
    ret->nodetype = nodetype;
    ret->l = l;
    ret->r = r;
    return ret;
}

node* node::newnum(double d)
{
    numval* ret = new numval;
    ret->nodetype = 'K';
    ret->number = d;
    return ret;
}

exp::~exp()
{
    if (l != nullptr)
        delete l;
    l = nullptr;
    if (r != nullptr)
        delete r;
    r = nullptr;
}

double exp::eval()
{
    double ret = 0;
    switch (nodetype)
    {
        case '+' : ret = l->eval() + r->eval(); break;
        case '-' : ret = l->eval() - r->eval(); break;
        case '*' : ret = l->eval() * r->eval(); break;
        case '/' : ret = l->eval() / r->eval(); break;
        case '|' : ret = l->eval(); ret = ret > 0 ? ret : -ret; break;
        case 'M' : ret = - l->eval(); break;
        default: printf("internal error: bad node %c\n", nodetype);
    }
    return ret;
}

double numval::eval()
{
    return number;
}

numval::~numval()
{
    int a = number;
}

int main()
{
    printf("> ");

    return yyparse();
}



