#ifndef AST_PRO_H
#define AST_PRO_H

#include "calculatorpro_parser.h"

extern int yylineno;    /* from flex */
void yyerror(char* s, ...);

// forward declare
struct exp;
struct numval;
struct symbol;

struct node
{
    static node* newnum(double d);
    static node* newexp(int nodetype, node* l, node* r);

    static node* newcmp(int cmptype, node* l, node* r);
    static node* newfunc(int functype, node* l);
    static node* newcall(symbol* s, node* l);
    static node* newref(symbol* s);
    static node* newasgn(symbol* s, node* v);
    static node* newflow(int nodetype, node* cond, node* tl, node* tr);

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


enum bifs
{
    B_sqrt = 1,
    B_exp,
    B_log,
    B_print
};

struct symbol;

// inner function
struct fncall : public node
{
    fncall() : l(nullptr) {}
    ~fncall();
    virtual double eval();
    node* l;
    bifs functype;
};

// user function
struct ufncall : public node
{
    ~ufncall();
    virtual double eval();
    node* l;        /* func real param */
    symbol* s;
};

struct flow : public node
{
    ~flow();
    virtual double eval();
    node* cond; /* condition */
    node* tl;   /* then or do */
    node* el;   /* opt else */
};

struct symref : public node
{
    ~symref();
    virtual double eval();
    symbol* s;
};

struct symasgn : public node
{
    ~symasgn();
    virtual double eval();
    symbol* s;
    node* v;
};

#endif