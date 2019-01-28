#include "node.h"
#include "parser.h"
#include "Stmt.h"
#include "resolve.h"
#include "ResultPlan.h"


IPlan* CreatePlan(
        const BaseTableVisit& baseTableVisit,
        const BaseTableColumnVisit& baseTableColumnVisit,
        const StartNewStmt& startNewStmt,
        const WhereClauseVisit& whereClauseVisit,
        const ErrorOccur& errorOccur,
        void* context, INode* node)
{
    Node* root = dynamic_cast<Node*>(node);
    resolve::ResultPlan* ret = new resolve::ResultPlan(
            baseTableVisit, baseTableColumnVisit,
            startNewStmt, whereClauseVisit, errorOccur);
    ret->context_ = context;
    ret->tree_root_ = root;
    return ret;
}

void DestroyPlan(IPlan* plan)
{
    delete(plan);
}

void VisitPlan(IPlan* p)
{
    resolve::ResultPlan* plan = dynamic_cast<resolve::ResultPlan*>(p);
    if (!plan)
        return;
    if (!plan->tree_root_)
        return;

    resolve::resolve(plan, plan->tree_root_);

}

IParseResult* ParseSql(const std::string &sql)
{
    ParseResult* result = new ParseResult;
    parser::parse(sql, result);

    return result;
}

void DestroyParseResult(IParseResult* result)
{
    delete(result);
}

NodeType Node::GetType()
{
    return nodeType_;
}

INode* Node::GetParent()
{
    return parent_;
}

bool Node::SetParent(INode *node)
{
    Node* parent = dynamic_cast<Node*>(node);
    if (!parent)
        return false;
    setParent(parent);
    return true;
}

INode* Node::GetChild(int key)
{
    return getChild(key);
}

bool Node::SetChild(int key, INode *node)
{
    Node* child = dynamic_cast<Node*>(node);
    if (!child)
        return false;
    return setChild(key, child);
}

int Node::GetChildrenCount() const
{
    return getChildrenCount();
}

std::string Node::Text() const
{
    return text();
}

bool Node::IsTerminal() const
{
    return isTerminalToken;
}

std::string Node::Serialize()
{
    return serialize();
}

void Node::Print()
{
    print(this, 0);
}

bool ParseResult::IsAccept() const
{
    return accept;
}

INode* ParseResult::GetParseTree()
{
    return result_tree_;
}

size_t ParseResult::GetErrorLine() const
{
    return errFirstLine;
}

size_t ParseResult::GetErrorColumn() const
{
    return errFirstColumn;
}

std::string ParseResult::GetErrorDetail() const
{
    return errDetail;
}
