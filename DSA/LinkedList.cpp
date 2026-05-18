#include "LinkedList.hpp"
#include <iostream>
#define LOG(x) std::cout<<x<<std::endl
//LinkedList implementation
LinkedList::LinkedList(int value): length(1), head(new Node(value)),tail(head){
    LOG("created");
}

LinkedList::~LinkedList(){
    Node* temp = head;
    while(head){
        head = head->next;
        delete temp;
        temp = head;
    }
    LOG("destroyed");
}

void LinkedList::print(){
    Node* temp = head;
    while (temp!= nullptr){
        std::cout<<temp->value<<std::endl;
        temp = temp->next;
    }
}

void LinkedList::append(int value){
    Node* newNode = new Node(value);
    tail->next = newNode;
    tail = newNode;
    tail->next = nullptr;
    length++;
}

int LinkedList::getLength(){
    return length;
}

Node* LinkedList::getHead() const{
    return head;
}




