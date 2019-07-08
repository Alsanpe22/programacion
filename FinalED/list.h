#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "node.h"

using namespace std;

class List
{
public:
    List();

    void insert(unsigned int value);

    Node* search(unsigned int value);

    void print() const;

    Node *getFirst() const;
    void setFirst(Node *value);

    Node *getLast() const;
    void setLast(Node *value);

private:
    Node* first;
    Node* last;
};

ostream & operator<<(ostream & os, List const &  l);


#endif // LIST_H
