#include "list.h"

List::List():
    first{nullptr}
{

}

void List::insert(unsigned int value)
{
    Node * n = new Node(value);
    if(first){
        if(value >= first->getDato()){
            if(last){
                last->setNext(n);
                n->setPrev(last);
                last = n;
            }else{
                last = n;
                first = n;
            }
        }else{
            if(first){
                n->setNext(first);
                first->setPrev(n);
                //first = n;
            }else{
                first = n;
                last = n;
            }
        }
    }
    else{
        first = n;
        last = n;
    }

}

Node *List::search(unsigned int value)
{
    for(Node* it = first; it != nullptr; it = it->getNext()){
        if(it->getDato() == value) return it;
        else return nullptr;
    }
}

void List::print() const
{

}

Node *List::getFirst() const
{
    return first;
}

void List::setFirst(Node *value)
{
    first = value;
}

Node *List::getLast() const
{
    return last;
}

void List::setLast(Node *value)
{
    last = value;
}

ostream & operator<<(ostream &os, const List &l)
{
    for(Node* it = l.getFirst()->getPrev(); it != nullptr; it = it->getPrev()){
        os << it->getDato() << " - ";
    }
    for(Node* it = l.getFirst(); it != nullptr; it = it->getNext()){
        os << it->getDato() << " - ";
    }

    return os;

}
