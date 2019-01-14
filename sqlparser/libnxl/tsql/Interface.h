#ifndef INTERFACE_H
#define INTERFACE_H

#include "keydef.h"
#include <functional>
struct INode
{
    static INode* Parse(const std::string& sql);
    static void Destroy(INode*);
    virtual ~INode(){}
    virtual NodeType GetType() = 0;
    virtual INode* GetParent() = 0;
    virtual bool SetParent(INode* node) = 0;
    virtual INode* GetChild(int key) = 0;
    virtual bool SetChild(int key, INode* node) = 0;
    virtual int GetChildrenCount() const = 0;
    virtual std::string Text() const = 0;
    virtual bool IsTerminal() const = 0;
    virtual std::string Serialize() = 0;
    virtual void Print() = 0;
};

struct ITableItem;
struct IStmt;
struct IPlan
{
    typedef std::function<void(IPlan*, ITableItem*,
                               uint64_t query_id)> BaseTableVisit;
    static void Visit(IPlan*);
    static IPlan* CreatePlan(const BaseTableVisit& baseTableVisit, void* context, INode*);
    static void Destroy(IPlan*);
    virtual ~IPlan() {}
    virtual void* GetContext() = 0;
    virtual IStmt* GetQuery(uint64_t query_id) = 0;
};

struct ITableItem
{
    virtual ~ITableItem(){}
    virtual TableItemType GetTableItemType() = 0;
    virtual uint64_t GetTableID() = 0;
    virtual std::string GetTableName() = 0;
    virtual std::string GetTableAliasName() = 0;
    virtual std::string GetSchemaName() = 0;
    virtual std::string GetDatabaseName() = 0;
    virtual std::string GetServerName() = 0;
    virtual std::string GetTableHint() = 0;
    virtual std::string GetTableObject() = 0;
    virtual bool SetText(
            TableItemType tp,
            const std::string& newtable,
            const std::string& alias) = 0;
    virtual int GetLine() = 0;
    virtual int GetColumn() = 0;
};

struct IStmt
{
    virtual ~IStmt(){}
    virtual StmtType GetStmtType() = 0;
    virtual uint64_t GetQueryID() = 0;
};

struct ISelectStmt
{

};

struct IUpdateStmt
{

};

#endif