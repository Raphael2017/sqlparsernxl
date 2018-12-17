#ifndef NODE_H
#define NODE_H

#include <vector>
#include <list>
#include <string>
#include <map>
#include <sstream>
#include "keydef.h"

//#define NODE_CHILDREN_DEBUG

struct Node;
struct ParseResult
{
    ParseResult();
    ~ParseResult();
    Node* result_tree_;
    bool accept;
    int errFirstLine;
    int errFirstColumn;
    std::string errDetail;
    std::stringstream buf_;
};

struct TerminalToken
{
    //  after convert
    int i;
    double d;
    std::string str;

    // before convert
    std::string yytex;
};

struct Node
{
    static Node* makeTerminalNode(NodeType tp, const char*);
    static Node* makeNonTerminalNode(NodeType tp, int num, ...);

    static bool IsList(Node*);

    /*
     * we provide recursive and non_recursive interface
     * */
    static int ListLength(Node*);
    static int ListLengthNonRecursive(Node*);

    static void ToList(Node*, std::list<Node*>&);
    static void ToListNonRecursive(Node*, std::list<Node*>&);

    /*
     * compact format
     * */
    static std::string SerializeNonRecursive(Node* root);
    std::string serialize();

    static void find_node(Node* root, NodeType target, std::list<Node*>& ret);
    static void find_node_non_recursive(Node* root, NodeType target, std::list<Node*>& ret);

    static void find_table_direct_ref(Node* root, std::list<Node*>& ret);
    static void find_table_direct_ref_non_recursive(Node* root, std::list<Node*>& ret);

    static void find_table_direct_ref(Node** root, std::list<Node**>& ret);
    static void find_table_direct_ref_non_recursive(Node** root, std::list<Node**>& ret);


    Node();
    ~Node();

    Node* getChild(int key);
    Node** getChildRef(int key);
    bool setChild(int key, Node*);
    int getChildrenCount() const;

    NodeType nodeType_;
    bool isTerminalToken;
    TerminalToken terminalToken_;
    const std::list<std::string>* serialize_format;     // ["function ", "{1}", "(", "{2}", ")", "{3}", "end"]
private:
    void print(int);
    double eval();
private:
#ifdef NODE_CHILDREN_DEBUG
    std::vector<Node*> children_;
#else
    Node** children_;
#endif
    int childrenCount_;
private:
    static int GetKey(const std::string&);
    static bool Divide(const std::string&, std::vector<std::string>&);  // "abc{12}XYZ"
};

#endif