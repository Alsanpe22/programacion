#include "node.h"

Node::Node(unsigned int dato):
    dato{dato},
    next{nullptr},
    prev{nullptr}
{

}


unsigned int Node::getDato() const
{
    return dato;
}

Node *Node::getNext() const
{
    return next;
}

void Node::setNext(Node *value)
{
    next = value;
}

Node *Node::getPrev() const
{
    return prev;
}

void Node::setPrev(Node *value)
{
    prev = value;
}
