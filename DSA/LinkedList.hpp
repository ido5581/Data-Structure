#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.hpp"
class LinkedList{
    private:
        int length;
        Node* head;
        Node* tail;
    public:
        LinkedList(int value);
        ~LinkedList();
        void print();
        void append(int value);
        void deleteLast();
        int getLength();
};
#endif