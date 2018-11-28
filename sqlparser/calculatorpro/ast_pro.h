#ifndef AST_PRO_H
#define AST_PRO_H

#include <list>
#include <map>
#include <string>

struct symbol;

extern int yylineno;    /* from flex */
void yyerror(char* s, ...);

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
    bool withparent;

    virtual ~node() {}
    virtual double eval() = 0;
    virtual std::string serialize() = 0;
};

struct exp : public node
{
    exp() : l(nullptr), r(nullptr) { withparent = false; }
    ~exp();
    virtual double eval();
    virtual std::string serialize();
    node* l;
    node* r;
};

struct numval : public node
{
    ~numval();
    virtual double eval();
    virtual std::string serialize();
    double number;
};

enum bifs
{
    B_sqrt = 1,
    B_exp,
    B_log,
    B_print
};

// inner function
struct fncall : public node
{
    fncall() : l(nullptr) {}
    ~fncall();
    virtual double eval();
    virtual std::string serialize();
    node* l;
    bifs functype;
};

// user function
struct ufncall : public node
{
    ~ufncall();
    virtual double eval();
    virtual std::string serialize();
    node* l;        /* func real param */
    symbol* s;
};

struct flow : public node
{
    ~flow();
    virtual double eval();
    virtual std::string serialize();
    node* cond; /* condition */
    node* tl;   /* then or do */
    node* el;   /* opt else */
};

struct symref : public node
{
    ~symref();
    virtual double eval();
    virtual std::string serialize();
    symbol* s;
};

struct symasgn : public node
{
    ~symasgn();
    virtual double eval();
    virtual std::string serialize();
    symbol* s;
    node* v;
};


//
struct symbol
{
    typedef std::list<symbol*> symlist;
    static std::list<symbol*>* newsymlist(symbol*, std::list<symbol*>*);
    virtual std::string serialize();
    symbol() : value(0), func(nullptr), syms(nullptr) {}
    ~symbol();
    void def(std::list<symbol*>* ss, node* stmts);
    std::string name;
    double value;

    node* func;                 /* func body */
    symlist* syms;    /* func formal params */
};

struct symstab
{
    static symstab* instance();
    symbol* lookup(const char*);
    std::map<std::string, symbol> data_;
private:
    static symstab* ins_;
};

#endif