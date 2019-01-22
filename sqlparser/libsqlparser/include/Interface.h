#ifndef INTERFACE_H
#define INTERFACE_H

#include "keydef.h"
#include <functional>
#include <vector>

#ifndef WIN32
#define SQLPARSER_PUBLIC_API __attribute__((visibility("default")))
#define SQLPARSER_LOCAL_API  __attribute__((visibility("hidden")))
#else
#ifdef  SQLPARSER_EXPORT
#define SQLPARSER_PUBLIC_API  __declspec(dllexport)
#else
#define SQLPARSER_PUBLIC_API  __declspec(dllimport)
#endif //SQLPARSER_EXPORT
#endif //WIN32


struct INode
{
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
struct ITableColumnRefItem;
struct IStmt;
struct IPlan;
typedef std::function<void(IPlan*, ITableItem*)> BaseTableVisit;
typedef std::function<void(IPlan*, ITableColumnRefItem*)> BaseTableColumnVisit;
typedef std::function<void(IPlan*)> StartNewStmt;
struct IPlan
{
    virtual ~IPlan() {}
    virtual void* GetContext() = 0;
    virtual IStmt* GetQuery(uint64_t query_id) = 0;
    virtual void SetDefaultSchema(const std::string& default_schema) = 0;
    virtual void AddTableStructure(const std::string& schema, const std::string& table, const std::list<std::string>& columns) = 0;
};

struct ITableItem
{
    virtual ~ITableItem(){}
    virtual TableItemType GetTableItemType() = 0;
    virtual uint64_t GetTableID() = 0;
    virtual uint64_t GetQueryID() = 0;
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

struct ITableColumnRefItem
{
    virtual ~ITableColumnRefItem(){}
    virtual ITableItem* GetTableItem() = 0;
    virtual std::string GetColumnName() = 0;
    virtual std::string GetColumnObject() = 0;
    virtual bool SetText(const std::string& columnref) = 0;
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

extern "C"
{
SQLPARSER_PUBLIC_API INode* ParseNode(const std::string& sql);
SQLPARSER_PUBLIC_API void DestroyNode(INode*);
SQLPARSER_PUBLIC_API IPlan* CreatePlan(const BaseTableVisit& baseTableVisit,
                  const BaseTableColumnVisit& baseTableColumnVisit,
                  const StartNewStmt& startNewStmt,
                  void* context, INode*);
SQLPARSER_PUBLIC_API void VisitPlan(IPlan*);
SQLPARSER_PUBLIC_API void DestroyPlan(IPlan*);
}

#endif