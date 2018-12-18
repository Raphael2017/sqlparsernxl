#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <map>

struct Node;
struct Environment
{
    Node* self;
    Environment* parent;
};

typedef struct Environment* Entry;

struct Field;

struct VirtualTable
{
    std::string name;
    std::set<Field*> fields;
};

struct Field
{
    VirtualTable* belong;
    std::string name;
    std::set<Field*> reference;
};

#endif
