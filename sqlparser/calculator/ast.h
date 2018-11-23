#ifndef AST_H
#define AST_H

#include "calculator_parser.h"

extern int yylineno;    /* from flex */
void yyerror(char* s, ...);

// forward declare
struct exp;
struct numval;

struct node
{
    static node* newnum(double d);
    static node* newexp(int nodetype, node* l, node* r);
    int nodetype;
    virtual ~node() {}
    virtual double eval() = 0;
};

struct exp : public node
{
    exp() : l(nullptr), r(nullptr) {}
    ~exp();
    virtual double eval();
    node* l;
    node* r;
};

struct numval : public node
{
    ~numval();
    virtual double eval();
    double number;
};


#endif