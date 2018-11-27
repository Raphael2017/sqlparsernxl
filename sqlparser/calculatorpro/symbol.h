#ifndef SYMBOL_H
#define SYMBOL_H

#include <list>
#include <map>
#include <string>

struct node;

struct symbol
{
    static std::list<symbol*>* newsymlist(symbol*, std::list<symbol*>*);
    symbol() : value(0), func(nullptr), syms(nullptr) {}
    ~symbol();
    void def(std::list<symbol*>* ss, node* stmts);
    std::string name;
    double value;

    node* func;                 /* func body */
    std::list<symbol*>* syms;    /* func formal params */
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