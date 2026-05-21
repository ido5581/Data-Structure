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

bool LinkedList::deleteLast(){

    if(length==0) return false;
    if(length == 1){
        delete head;
        head = tail = nullptr;
        length--;
        return true;
    }
    Node* curr = head->next;
    Node* prev = head;
    while(curr != tail){
        curr = curr->next;
        prev = prev->next;
    }
    tail = prev;
    prev->next = nullptr;
    delete curr;
    length--;
    return true;
}

void LinkedList::prepend(int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    length++;
}

bool LinkedList::deleteFirst(){
    Node* temp = head;
    head = head->next;
    delete temp;
    length--;
    return true;
}

Node* LinkedList::get(int index){
    if (index < 0 || index > length)
        return nullptr;
    Node* temp = head;
    for(int i = 0; i < index; i++){
        temp = temp->next;
    }
    return temp;
}

void LinkedList::set(int index, int value){
    if (index < 0 || index > length) return;
    Node* temp = head;
    for (int i = 0; i < index; i++){
        temp = temp->next;
    }
    temp->value = value;
}

bool LinkedList::insert(int index, int value){
    if(index < 0 || index > length) return false;
    else if(index == 0){
        prepend(value);
        return true;
    }
    else if(index == length){
        append(value);
        return true;
    }
    else{
        Node* prev = head;
        Node* temp = head;
        Node* newNode = new Node(value);
        for(int i = 0; i < index-1; i++){
            prev = prev->next;
            temp = temp->next;
        }
        temp = prev->next;
        prev->next = newNode;
        newNode->next = temp;
        length++;
    }
    return true;
}

bool LinkedList::deleteNode(int index){
    if(index < 0 || index >= length) return false;
    else if(index == 0) deleteFirst();
    else if(index == length-1) deleteLast();
    else{
        Node* temp = get(index-1);
        Node* temp2 = get(index);
        temp->next = temp2->next;
        delete temp2;
        length--;
    }
    return true;
}

void LinkedList::reverse(){
    Node* temp = head;
    head = tail; 
    tail = temp;
    delete temp;

    Node* prev = tail;
    Node* curr = tail->next;
    Node* after = curr->next;
    tail->next = nullptr;
    while(curr != head){
    }
    
    
    

    
}