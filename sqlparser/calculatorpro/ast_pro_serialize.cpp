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
    return ret + std::to_string(number);
}

std::string fncall::serialize()
{
    std::string ret = "";
    /*FUNC '(' explist ')'*/
    switch (functype)
    {
        case B_sqrt:
            return ret + "sqrt" +   "(" + l->serialize() + ")";
        case B_exp:
            return ret + "exp" +    "(" + l->serialize() + ")";
        case B_log:
            return ret + "log" +    "(" + l->serialize() + ")";
        case B_print:
            return ret + "print" +  "(" + l->serialize() + ")";
        default:
            yyerror("Unknown built-in function %d", functype);
            return ret;
    }
    return ret;
}

std::string ufncall::serialize()
{
    std::string ret = "";
    /*NAME '(' explist ')'*/
    return ret + s->name + "(" + l->serialize() + ")";
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
    return ret + s->name;
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




