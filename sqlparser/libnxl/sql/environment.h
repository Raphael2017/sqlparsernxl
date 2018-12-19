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
#endif
