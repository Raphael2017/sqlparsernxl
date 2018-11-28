#include "ast_pro.h"
#include <math.h>
#include <stdio.h>
#include <stdarg.h>
#include <list>

void yyerror(char* s, ...)
{
    va_list ap;
    va_start(ap, s);
    fprintf(stderr, "%d: error: ", yylineno);
    vfprintf(stderr, s, ap);
    fprintf(stderr, "\n");
}

node* node::newexp(int nodetype, node* l, node* r)
{
    struct exp* ret = new struct exp;
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

node* node::newcmp(int cmptype, node* l, node* r)
{
    struct exp* ret = new struct exp;
    ret->nodetype = '0' + cmptype;
    ret->l = l;
    ret->r = r;
    return ret;
}

node* node::newfunc(int functype, node* l)
{
    fncall* a = new fncall;
    a->nodetype = 'F';
    a->l = l;
    a->functype = (bifs)functype;
    return a;
}

node* node::newcall(symbol* s, node* l)
{
    ufncall* a = new ufncall;
    a->nodetype = 'C';
    a->l = l;
    a->s = s;
    return a;
}

node* node::newref(symbol* s)
{
    symref* a = new symref;
    a->nodetype = 'N';
    a->s = s;
    return a;
}
node* node::newasgn(symbol* s, node* v)
{
    symasgn* a = new symasgn;
    a->nodetype = '=';
    a->s = s;
    a->v = v;
    return a;
}

node* node::newflow(int nodetype, node* cond, node* tl, node* el)
{
    flow* a = new flow;
    a->nodetype = nodetype;
    a->cond = cond;
    a->tl = tl;
    a->el = el;
    return a;
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

        // compare
        case '1' : ret = (l->eval() > r->eval()) ? 1 : 0; break;
        case '2' : ret = (l->eval() < r->eval()) ? 1 : 0; break;
        case '3' : ret = (l->eval() != r->eval()) ? 1 : 0; break;
        case '4' : ret = (l->eval() == r->eval()) ? 1 : 0; break;
        case '5' : ret = (l->eval() >= r->eval()) ? 1 : 0; break;
        case '6' : ret = (l->eval() <= r->eval()) ? 1 : 0; break;

        case 'L' :
        {
            if (!r)
            {
                ret = l->eval();
            }
            else
            {
                l->eval(); ret = r->eval();
            }
        }
            break;
        case 'Q' : l->eval(); ret = r->eval(); break;
        case 'R' :
        {
            if (!r)
            {
                ret = l->eval();
            }
            else
            {
                l->eval(); ret = r->eval();
            }
        }
            break;
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



fncall::~fncall()
{
    if (l)
    {
        delete l;
        l = nullptr;
    }
}

double fncall::eval()
{
    double v = l->eval();
    switch (functype)
    {
        case B_sqrt:
            return sqrt(v);
        case B_exp:
            return exp(v);
        case B_log:
            return log(v);
        case B_print:
        {
            printf("= %4.4g\n", v);
            return 0.0;
        }
        default:
            yyerror("Unknown built-in function %d", functype);
            return 0.0;
    }
}

ufncall::~ufncall()
{
    if (l)
    {
        delete l;
        l = nullptr;
    }
}

double ufncall::eval()
{
    if (!s->func)
    {
        yyerror("call to undefined function %s", s->name.c_str());
        return 0.0;
    }

    size_t nargs = s->syms->size();

    std::list<double> olds, news;
    // news
    node* ll = l;
    while (nargs > 0 && ll)
    {
        double param = 0.0;
        if (ll->nodetype == 'Q')
        {
            param = ((struct exp*)ll)->l->eval();
            ll = ((struct exp*)ll)->r;
        }
        else
        {
            param = ll->eval();
            ll = nullptr;
        }
        news.push_back(param);
        nargs--;
    }

    if (nargs != 0)
    {
        yyerror("call to function %s with params count error", s->name.c_str());
        return 0.0;
    }

    {
        auto itsyms = s->syms->begin();
        auto itnews = news.begin();
        while (itsyms != s->syms->end())
        {
            olds.push_back((*itsyms)->value);
            (*itsyms)->value = *itnews;
            ++itsyms; ++itnews;
        }
    }

    double ret = s->func->eval();

    {
        auto itsyms = s->syms->begin();
        auto itolds = olds.begin();
        while (itsyms != s->syms->end())
        {
            (*itsyms)->value = *itolds;
            ++itsyms; ++itolds;
        }
    }

    return ret;
}

flow::~flow()
{
    if (cond)
    {
        delete cond;
        cond = nullptr;
    }
    if (tl)
    {
        delete tl;
        tl = nullptr;
    }
    if (el)
    {
        delete el;
        el = nullptr;
    }
}

double flow::eval()
{
    double ret = 0.0;
    switch (nodetype)
    {
        case 'I':
        {
            if ((int)cond->eval() != 0)
            {
                if (tl)
                {
                    ret = tl->eval();
                }
                else
                {
                    ret = 0.0;
                }
            }
            else
            {
                if (el)
                {
                    ret = el->eval();
                }
                else
                {
                    ret = 0.0;
                }
            }
        }
            break;
        case 'W':
        {
            if (tl)
            {
                while ((int)cond->eval() != 0)
                {
                    ret = tl->eval();
                }
            }
        }
            break;
    }

    return ret;
}

symref::~symref()
{

}

double symref::eval()
{
    return s->value;
}

symasgn::~symasgn()
{

}

double symasgn::eval()
{
    s->value = v->eval();
    return s->value;
}


//
std::list<symbol*>* symbol::newsymlist(symbol* name, std::list<symbol*>* symlist)
{
    std::list<symbol*>* ret = symlist;
    if (!symlist)
    {
        ret = new std::list<symbol*>;
    }
    ret->push_front(name);
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
