#ifndef LOCAL_TABLE_MGR_H
#define LOCAL_TABLE_MGR_H

#include <cstdint>
#include <string>
#include <map>
#include <list>

namespace resolve
{
    struct LocalTableMgr
    {
        LocalTableMgr();
        void report();
        void reset();

        uint64_t  get_local_table_id(const std::string& schema_table_name);

        uint64_t  get_local_table_column_id(const std::string& schema_table_name,
                                            const std::string& column_name);
        std::string get_local_table_column_name(uint64_t table_id, uint64_t column_id);

        std::string get_default_schema() const { return default_schema_; }
        void set_default_schema(const std::string& default_schema) { default_schema_ = default_schema; }

        uint64_t add_table_struct(const std::string& schema_table_name, const std::list<std::string>& cols);
        bool get_table_struct(uint64_t table_id, std::map<std::string, uint64_t >& out_struct);
    private:
        uint64_t add_local_table_column(const std::string& table_name,
                                        const std::string& column_name);
    private:
        std::map<std::string, uint64_t > local_table_;
        std::map<uint64_t , std::map<std::string, uint64_t >> local_table_column_;
        uint64_t local_table_id_begin_;
        std::string default_schema_{"dbo"};
    };
}

#endif