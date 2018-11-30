#ifndef NODE_H
#define NODE_H

#include <vector>
#include <list>
#include <string>
#include <map>
#include "keydef.h"

struct TerminalToken
{
    double d;
    std::string str;
};
struct Node
{
    static Node* makeTerminalNode(NodeType tp);
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

struct symstab
{
    static symstab* instance();
    Node* lookup(const char*);
private:
    std::map<std::string, Node*> data_;
    static symstab* ins_;
};

extern int yylineno;    /* from flex */
void yyerror(char* s, ...);

#endif