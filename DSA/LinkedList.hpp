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
        bool deleteLast();
        int getLength();
        Node* getHead() const; 
        void prepend(int value);
        bool deleteFirst();
        Node* get(int index);
        void set(int index, int value);
        bool insert(int index, int value);
        bool deleteNode(int index);
        void reverse();
};
#endif