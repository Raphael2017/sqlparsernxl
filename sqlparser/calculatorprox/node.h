#ifndef NODE_H
#define NODE_H

#include <vector>
#include <string>

enum NodeType
{

};
struct TerminalToken
{

};
struct Node
{
    static Node* makeTerminalNode(NodeType tp);
    static Node* makeNonTerminalNode(NodeType tp, int num, ...);

    Node();
    ~Node();
    void print(int) const;
    std::string serialize() const;
    double eval();

    NodeType nodeType_;
    bool isTerminalToken;
    TerminalToken terminalToken_;
    std::vector<Node*> children_;
};

#endif