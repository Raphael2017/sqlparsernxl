#ifndef SELECT_STMT_H
#define SELECT_STMT_H
#include <string>
#include <vector>
#include <algorithm>
#include "Interface.h"
#include "Stmt.h"


namespace resolve {
    struct SelectItem;

    struct SelectStmt : public Stmt, public ISelectStmt {
    public:
        const std::vector<SelectItem*>& get_select_items() const { return select_items_; }
        bool add_select_item_expand_star(
                ResultPlan* plan,
                const std::string& schema,
                const std::string& table);
        bool add_select_item(uint64_t expr_id, const std::string& alias, bool is_real_alias);
        bool is_set_op() const;
        uint64_t get_set_op_left_query_id() const;
        uint64_t get_set_op_right_query_id() const;
        void set_set_op_left_query_id(uint64_t left_query_id);
        void set_set_op_right_query_id(uint64_t right_query_id);
    private:
        uint64_t get_last_column_id() const;
        std::vector<SelectItem*> select_items_;
        uint64_t left_query_id_;
        uint64_t right_query_id_;

    public:
        virtual StmtType GetStmtType() override { return  E_STMT_TYPE_SELECT; }
    };
}

#endif