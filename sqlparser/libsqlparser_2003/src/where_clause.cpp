#include "where_clause.h"
#include "node.h"
#include <assert.h>

namespace resolve
{
    std::string WhereCluase::GetCondition()
    {
        if (!where_)
            return "";
        else
            return where_->serialize();
    }

    bool WhereCluase::AddCondition(const std::string& condition)
    {
        if (!where_)
        {
            Node* new_expr = Node::makeTerminalNode(E_STRING, condition);
            Node* where = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, new_expr);
            where->serialize_format = &WHERE_SERIALIZE_FORMAT;
            switch (select_->nodeType_)
            {
                case E_SELECT:
                {
                    select_->setChild(E_SELECT_OPT_WHERE, where);
                }
                    break;
                case E_UPDATE:
                {
                    select_->setChild(E_UPDATE_OPT_WHERE, where);
                }
                    break;
                case E_DELETE:
                {
                    select_->setChild(E_DELETE_OPT_WHERE, where);
                }
                    break;
                default:
                    assert(false);  /* unreachable */
                    break;
            }
        }
        else
        {
            Node* ori_expr = where_->getChild(E_WHERE_CLAUSE_EXPR);
            Node* cond = Node::makeTerminalNode(E_STRING, condition);
            Node* new_expr = Node::makeNonTerminalNode(E_OP_AND, E_OP_BINARY_PROPERTY_CNT, ori_expr, cond);
            new_expr->serialize_format = &OP_AND_SERIALIZE_FORMAT;
            where_->setChild(E_WHERE_CLAUSE_EXPR, new_expr);
        }
        return true;
    }

    void WhereCluase::bind(Node* where, Node* select)
    {
        where_ = where;
        select_ = select;
        if (!where_)
        {
            assert(select);
            assert(select->nodeType_ == E_SELECT ||
            select->nodeType_ == E_UPDATE ||
            select->nodeType_ == E_DELETE);
        }
    }
}