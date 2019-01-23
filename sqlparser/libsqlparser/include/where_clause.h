#ifndef WHERE_CLAUSE_H
#define WHERE_CLAUSE_H

#include "Interface.h"
struct Node;

namespace resolve
{
    struct WhereCluase : public IWhereCluase
    {
        virtual std::string GetCondition();
        virtual bool AddCondition(const std::string& condition);
        virtual uint64_t GetQueryID() { return query_id_; }
        void bind(Node* where, Node* select);
        Node* where_;
        Node* select_;
        uint64_t query_id_;
    };
}

#endif