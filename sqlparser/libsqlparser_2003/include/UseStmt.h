#ifndef USE_STMT_H
#define USE_STMT_H

#include "Interface.h"
#include "Stmt.h"

namespace resolve {
    struct UseStmt : public Stmt {
    public:
        void set_database_name(const std::string& db) { database_name_ = db; }
        std::string get_database_name() const { return database_name_; }
    private:
        std::string database_name_;
    };
}

#endif