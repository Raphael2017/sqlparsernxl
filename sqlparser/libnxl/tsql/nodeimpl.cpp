#include "node.h"
#include "parser.h"
#include "Stmt.h"
#include "resolve.h"
#include "ResultPlan.h"


IPlan* IPlan::CreatePlan(
        const BaseTableVisit& baseTableVisit,
        const BaseTableColumnVisit& baseTableColumnVisit,
        const StartNewStmt& startNewStmt,
        void* context, INode* node)
{
    Node* root = dynamic_cast<Node*>(node);
    resolve::ResultPlan* ret = new resolve::ResultPlan(baseTableVisit, baseTableColumnVisit, startNewStmt);
    ret->context_ = context;
    ret->tree_root_ = root;
    return ret;
}

void IPlan::Destroy(IPlan* plan)
{
    delete(plan);
}

void IPlan::Visit(IPlan* p)
{
    resolve::ResultPlan* plan = dynamic_cast<resolve::ResultPlan*>(p);
    if (!plan)
        return;
    if (!plan->tree_root_)
        return;
    uint64_t query_id;
    std::list<Node*> stmts;
    Node::ToList(plan->tree_root_, stmts);

    size_t index = 1;
    for (auto stmt : stmts)
    {
        plan->startNewStmt_(plan);
        plan->reset();
        resolve::resolve_select_statement(plan, stmt, query_id);
    }
}

INode* INode::Parse(const std::string &sql)
{
    INode* ret = nullptr;
    ParseResult result;
    parser::parse(sql, &result);
    if (!result.accept)
    {
        printf("%s (L%d:%d)\n", result.errDetail.c_str(), result.errFirstLine + 1, result.errFirstColumn);
        return nullptr;
    }
    else
    {
        return result.result_tree_;
    }
}

void INode::Destroy(INode * node)
{
    delete(node);
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
