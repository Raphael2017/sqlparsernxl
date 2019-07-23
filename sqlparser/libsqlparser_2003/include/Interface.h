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
    virtual std::string Text() = 0;
    virtual bool IsTerminal() const = 0;
    virtual std::string Serialize() = 0;
    virtual void Print() = 0;
};

struct IParseResult
{
    virtual ~IParseResult(){}
    virtual bool IsAccept() const = 0;
    virtual INode* GetParseTree() = 0;
    virtual size_t GetErrorLine() const = 0;
    virtual size_t GetErrorColumn() const = 0;
    virtual std::string GetErrorDetail() const = 0;
};

struct ITableItem;
struct ITableColumnRefItem;
struct IStmt;
struct IPlan;
struct IWhereCluase;
typedef std::function<void(IPlan*, ITableItem*)> BaseTableVisit;
typedef std::function<void(IPlan*, ITableColumnRefItem*)> BaseTableColumnVisit;
typedef std::function<void(IPlan*, uint64_t last_stmt)> StartNewStmt;
typedef std::function<void(IPlan*, IWhereCluase*)> WhereClauseVisit;
typedef std::function<void(IPlan*)> ErrorOccur;
struct IWhereCluase
{
protected:
    virtual ~IWhereCluase(){}
public:
    virtual std::string GetCondition() = 0;
    virtual bool AddCondition(const std::string& condition) = 0;
    virtual uint64_t GetQueryID() = 0;
};
struct IPlan
{
protected:
    virtual ~IPlan() {}
public:
    virtual void* GetContext() = 0;
    virtual IStmt* GetQuery(uint64_t query_id) = 0;
    virtual void SetDefaultSchema(const std::string& default_schema) = 0;
    virtual void SetDefaultDatabase(const std::string& default_database) = 0;
    virtual DATABASE_TYPE GetDatabaseType() = 0;
    virtual std::string GetDefaultDatabase() = 0;
    virtual void AddTableStructure(
            const std::string& schema,
            const std::string& table,
            const std::list<std::string>& columns) = 0;
    virtual std::string GetErrorDetail() = 0;
};

struct ITableItem
{
protected:
    virtual ~ITableItem(){}
public:
    virtual TableItemType GetTableItemType() = 0;
    virtual uint64_t GetTableID() = 0;
    virtual uint64_t GetQueryID() = 0;

    virtual std::string GetTableName() = 0;
    virtual std::string GetSchemaName() = 0;
    virtual std::string GetDatabaseName() = 0;
    virtual std::string GetServerName() = 0;


    virtual std::string GetTableAliasName() = 0;
    virtual std::string GetTableHint() = 0;
    virtual std::string GetTableObject() = 0;
    virtual bool SetText(
            TableItemType tp,
            const std::string& newtable,
            const std::string& alias) = 0;
    virtual int GetLine() = 0;
    virtual int GetColumn() = 0;
};

struct IStoreProcedure {
protected:
    virtual ~IStoreProcedure() {}
public:
    virtual std::string GetStoreProcedureName() = 0;
    virtual std::string GetSchemaName() = 0;
    virtual std::string GetDatabaseName() = 0;
    virtual std::string GetServerName() = 0;
};

struct ITableColumnRefItem
{
protected:
    virtual ~ITableColumnRefItem(){}
public:
    virtual ITableItem* GetTableItem() = 0;
    virtual std::string GetColumnName() = 0;
    virtual std::string GetColumnObject() = 0;
    virtual bool SetText(const std::string& columnref) = 0;
    virtual int GetLine() = 0;
    virtual int GetColumn() = 0;
};

struct IStmt
{
protected:
    virtual ~IStmt(){}
public:
    virtual StmtType GetStmtType() = 0;
    virtual uint64_t GetQueryID() = 0;
    virtual size_t GetTableItemCount() const = 0;
    virtual ITableItem* GetTableItem(size_t index) = 0;
    virtual IStmt* GetParent() = 0;
};

struct ISelectStmt
{
protected:
    virtual ~ISelectStmt(){}
};

struct IUpdateStmt
{
protected:
    virtual ~IUpdateStmt(){}
public:
    virtual bool IsBasicTableOrAlias() = 0;
    virtual ITableItem* GetUpdateTable() = 0;
};

struct IDeleteStmt
{
protected:
    virtual ~IDeleteStmt() {}
public:
    virtual bool IsBasicTableOrAlias() = 0;
    virtual ITableItem* GetDeleteTable() = 0;
};

struct IInsertStmt
{
protected:
    virtual ~IInsertStmt() {}
public:
    virtual bool IsBasicTableOrAlias() = 0;
    virtual ITableItem* GetInsertTable() = 0;
};

struct ICallStmt
{
protected:
    virtual ~ICallStmt() {}
public:
    virtual IStoreProcedure *GetStoreProcedure() = 0;
};

extern "C"
{
SQLPARSER_PUBLIC_API IParseResult* ParseSql(const std::string& sql, DATABASE_TYPE dbms);
SQLPARSER_PUBLIC_API void DestroyParseResult(IParseResult*);
SQLPARSER_PUBLIC_API IPlan* CreatePlan(const BaseTableVisit& baseTableVisit,
                  const BaseTableColumnVisit& baseTableColumnVisit,
                  const StartNewStmt& startNewStmt,
                  const WhereClauseVisit& whereClauseVisit,
                  const ErrorOccur& errorOccur,
                  void* context, IParseResult*);
SQLPARSER_PUBLIC_API void VisitPlan(IPlan*);
SQLPARSER_PUBLIC_API void DestroyPlan(IPlan*);

SQLPARSER_PUBLIC_API bool CompressSql(const std::string& sql, std::string& out_sql);
SQLPARSER_PUBLIC_API bool BeautifySql(const std::string& sql, std::string& out_sql);
}

#endif