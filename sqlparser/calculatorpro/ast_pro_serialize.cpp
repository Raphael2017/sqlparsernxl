#include "ast_pro.h"

std::string exp::serialize()
{
    std::string ret = "";
    switch (nodetype)
    {
        case '+' : ret = l->serialize() + " + " + r->serialize(); break;
        case '-' : ret = l->serialize() + " - " + r->serialize(); break;
        case '*' : ret = l->serialize() + " * " + r->serialize(); break;
        case '/' : ret = l->serialize() + " / " + r->serialize(); break;
        case '|' : ret = "|" + l->serialize(); break;
        case 'M' : ret = "-" + l->serialize(); break;

            // compare
        case '1' : ret = l->serialize() + " > " + r->serialize(); break;
        case '2' : ret = l->serialize() + " < " + r->serialize(); break;
        case '3' : ret = l->serialize() + " <> "+ r->serialize(); break;
        case '4' : ret = l->serialize() + " == "+ r->serialize(); break;
        case '5' : ret = l->serialize() + " >= "+ r->serialize(); break;
        case '6' : ret = l->serialize() + " <= "+ r->serialize(); break;

        case 'L' :
        {
            auto tmp = r == nullptr ? "" : r->serialize();
            ret = l->serialize() + "; " + tmp;
        }
            break;
        case 'Q' :
        {
            ret = l->serialize() + ", " + r->serialize();
        }
            break;
        case 'R' :
        {
            auto tmp = r == nullptr ? "" : r->serialize();
            ret = l->serialize() + " " + tmp;
        }
            break;
        default: printf("internal error: bad node %c\n", nodetype);
    }
    if (withparent)
        ret = "(" + ret + ")";
    return ret;
}

std::string numval::serialize()
{
    std::string ret = "";
    ret = ret + std::to_string(number);
    if (withparent)
        ret = "(" + ret + ")";
    return ret;
}

std::string fncall::serialize()
{
    std::string ret = "";
    /*FUNC '(' explist ')'*/
    switch (functype)
    {
        case B_sqrt:
            ret = ret + "sqrt" +   "(" + l->serialize() + ")";
            break;
        case B_exp:
            ret = ret + "exp" +    "(" + l->serialize() + ")";
            break;
        case B_log:
            ret = ret + "log" +    "(" + l->serialize() + ")";
            break;
        case B_print:
            ret = ret + "print" +  "(" + l->serialize() + ")";
            break;
        default:
            yyerror("Unknown built-in function %d", functype);
            return ret;
    }
    if (withparent)
        ret = "(" + ret + ")";
    return ret;
}

std::string ufncall::serialize()
{
    std::string ret = "";
    /*NAME '(' explist ')'*/
    ret = ret + s->name + "(" + l->serialize() + ")";
    if (withparent)
        ret = "(" + ret + ")";
    return ret;
}

std::string flow::serialize()
{
    std::string ret = "";
    switch (nodetype)
    {
        case 'I':
        {
            if (!el)
            {
                /*IF exp THEN list END*/
                return ret + "IF " + cond->serialize() + " THEN " + tl->serialize() + " END";
            }
            else
            {
                /*IF exp THEN list ELSE list END*/
                return ret + "IF " + cond->serialize() + " THEN " + tl->serialize() + " ELSE " + el->serialize() + " END";
            }
        }
            break;
        case 'W':
        {
            /*WHILE exp DO list END*/
            return ret + "WHILE " + cond->serialize() + " DO " + tl->serialize() + " END";
        }
            break;
    }
    return ret;
}

std::string symref::serialize()
{
    /*NAME*/
    std::string ret = "";
    ret = ret + s->name;
    if (withparent)
        ret = "(" + ret + ")";
    return ret;
}

std::string symasgn::serialize()
{
    /*NAME '=' exp*/
    std::string ret = "";
    ret = ret + s->name + " = " + v->serialize();
    if (withparent)
        ret = "(" + ret + ")";
    return ret;
}

std::string symbol::serialize()
{
    std::string ret = "";
    /*FUNCTION NAME '(' symlist ')' list END*/

    std::string symlist = "";
    if (syms->size() > 0)
    {
        auto it = syms->begin();
        symlist = (*it)->name;
        ++it;
        while (it != syms->end())
        {
            symlist += "," + (*it)->name;
            ++it;
        }
    }
    return ret + "FUNCTION " + name + "(" + symlist + ")" + " " + func->serialize() + " END";
}




