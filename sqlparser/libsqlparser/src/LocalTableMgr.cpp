#include <algorithm>
#include <assert.h>
#include "LocalTableMgr.h"
#include "resolve.h"
#include "keydef.h"

namespace resolve
{
    LocalTableMgr::LocalTableMgr() : local_table_id_begin_(200)
    {

    }

    void LocalTableMgr::report()
    {
        printf("tables:\n");
        for (auto tb : local_table_)
        {
            auto table_name = tb.first;
            printf("%s\n", table_name.c_str());
        }
        printf("fields:\n");
        for (auto tb : local_table_)
        {
            auto table_name = tb.first;
            auto table_id = tb.second;
            auto cols = local_table_column_[table_id];
            for (auto col : cols)
            {
                auto col_name = col.first;
                std::string info = table_name + "." +col_name;
                printf("%s\n", info.c_str());
            }
        }
    }

    void LocalTableMgr::reset()
    {
        local_table_id_begin_ = 200;
        local_table_.clear();
        local_table_column_.clear();
    }

    uint64_t  LocalTableMgr::get_local_table_id(const std::string& table_name)
    {
        std::string tb = table_name;
        std::transform(tb.begin(), tb.end(), tb.begin(), ::toupper);
        auto fd = local_table_.find(tb);
        if (fd == local_table_.end())
        {
            local_table_[tb] = local_table_id_begin_;
            local_table_column_[local_table_id_begin_] = {};
            ++local_table_id_begin_;
        }
        else
        {
            return fd->second;
        }
    }

    uint64_t  LocalTableMgr::get_local_table_column_id(
            const std::string& table_name,
            const std::string& column_name)
    {
        std::string table_name_up = table_name;
        std::transform(table_name_up.begin(), table_name_up.end(), table_name_up.begin(), ::toupper);

        auto tb = local_table_.find(table_name_up);
        if (tb == local_table_.end())
            return OB_INVALID_ID;
        auto cols = local_table_column_.find(tb->second);
        if (cols != local_table_column_.end())
            return OB_INVALID_ID;
        if (cols->second.find(column_name) != cols->second.end())
            return OB_INVALID_ID;
        return cols->second[column_name];
    }

    uint64_t LocalTableMgr::add_local_table_column(
            const std::string& table_name,
            const std::string& column_name)
    {
        std::string table_name_up = table_name;
        std::transform(table_name_up.begin(), table_name_up.end(), table_name_up.begin(), ::toupper);

        auto tb = local_table_.find(table_name_up);
        assert(tb != local_table_.end());
        auto cols = local_table_column_.find(tb->second);
        assert(cols != local_table_column_.end());
        if (cols->second.find(column_name) == cols->second.end())
        {
            auto k = cols->second.size();
            cols->second[column_name] = 1 + k;
        }
        return cols->second[column_name];
    }
}