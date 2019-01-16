#ifndef SELECT_STMT_H
#define SELECT_STMT_H
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include "Interface.h"
#include "Stmt.h"
struct Node;

namespace resolve
{
    struct SelectStmt : public Stmt, public ISelectStmt
    {
    public:
        int add_select_item(
                uint64_t eid,
                const std::string& alias_name,
                const std::string& name);
        uint64_t get_set_op_left_query_id() const;
        uint64_t get_set_op_right_query_id() const;
        void set_set_op_left_query_id(uint64_t left_query_id);
        void set_set_op_right_query_id(uint64_t right_query_id);
        bool is_set_op() const;
    private:
        uint64_t left_query_id_;
        uint64_t right_query_id_;
        std::vector<SelectItem> select_items_;
        friend struct Stmt;
        friend class RawExprUnaryRef;
    };

    struct UpdateStmt : public Stmt, public IUpdateStmt
    {

    };
}

#endif