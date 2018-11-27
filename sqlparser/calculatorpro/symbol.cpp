#include "symbol.h"


std::list<symbol*>* symbol::newsymlist(symbol* name, std::list<symbol*>* symlist)
{
    std::list<symbol*>* ret = symlist;
    if (!symlist)
    {
        ret = new std::list<symbol*>;
    }
    ret->push_back(name);
    return ret;
}


symbol::~symbol()
{
    delete func;
}

void symbol::def(std::list<symbol*>* ss, node* stmts)
{
    if (syms)
    {
        delete syms;
        syms = nullptr;
    }
    if (func)
    {
        delete func;
        func = nullptr;
    }
    syms = ss;
    func = stmts;
}

symstab* symstab::ins_ = nullptr;

symstab* symstab::instance()
{
    if (!ins_)
        ins_ = new symstab;
    return ins_;
}

symbol* symstab::lookup(const char * sym)
{
    symbol* ret = nullptr;
    auto it = data_.find(sym);
    if (it == data_.end())
    {
        data_[sym].name = sym;
        ret = &data_[sym];
    }
    else
    {
        ret = &it->second;
    }
    return ret;
}