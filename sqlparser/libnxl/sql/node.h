#ifndef NODE_H
#define NODE_H

#include <vector>
#include <list>
#include <string>
#include <map>
#include "keydef.h"

struct Node;
struct ParseResult
{
    Node* result_tree_;
    //
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
    static int ListLength(Node*);
    static void ToList(Node*, std::list<Node*>&);

    Node();
    ~Node();
    void print(int) const;      // debug info
    std::string serialize();
    double eval();
    Node* getChild(int key);
    bool setChild(int key, Node*);

    NodeType nodeType_;
    bool isTerminalToken;
    TerminalToken terminalToken_;
    std::vector<Node*> children_;
    std::list<std::string> serialize_format;
    // ["function ", "{1}", "(", "{2}", ")", "{3}", "end"]

private:
    static int GetKey(std::string);
};

#endif