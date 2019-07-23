#ifndef JOIN_H
#define JOIN_H

#include "Interface.h"
#include <vector>

namespace resolve {
    /*
     * use RPN to descripe join detail
     * (A op1 B) op2 C means join_nodes_{A,B,op1,C,op2}
     * A op1 (B op2 C) means join_nodes_{A,B,C,op2,op1}
     * */
    struct JoinedTable {
        /*
         * join_type_ == E_NODETYPE_BEGIN id_ means table
         * else means join operator, id_ means expr
         * */
        struct JoinNode {
            NodeType join_type_;
            uint64_t id_;
        };

        void add_table(uint64_t tid) { join_nodes_.push_back({E_NODETYPE_BEGIN, tid}); }
        void add_join_op(NodeType e, uint64_t eid) { join_nodes_.push_back({e, eid}); }
        void set_join_id(uint64_t jid) { join_id_ = jid; }

    private:
        std::vector<JoinNode> join_nodes_;
        uint64_t join_id_;
    };
}

#endif