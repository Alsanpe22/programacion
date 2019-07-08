#ifndef NODE_H
#define NODE_H


class Node
{
public:
    Node(unsigned int dato);


    unsigned int getDato() const;

    Node *getNext() const;
    void setNext(Node *value);

    Node *getPrev() const;
    void setPrev(Node *value);

private:
    unsigned int dato;
    Node* next;
    Node* prev;
};

#endif // NODE_H
