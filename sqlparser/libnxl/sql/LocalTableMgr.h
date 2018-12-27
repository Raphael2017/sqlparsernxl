#ifndef LOCAL_TABLE_MGR_H
#define LOCAL_TABLE_MGR_H

#include <cstdint>
#include <string>
#include <map>

namespace resolve
{
    struct LocalTableMgr
    {
        LocalTableMgr();
        void report();

        uint64_t  get_local_table_id(const std::string& table_name);

        uint64_t  get_local_table_column_id(const std::string& table_name,
                                            const std::string& column_name);

        uint64_t add_local_table_column(const std::string& table_name,
                                        const std::string& column_name);
    private:
        std::map<std::string, uint64_t > local_table_;
        std::map<uint64_t , std::map<std::string, uint64_t >> local_table_column_;
        uint64_t local_table_id_begin_;
    };
}

#endif