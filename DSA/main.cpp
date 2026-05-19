#include "LinkedList.hpp"
#include <iostream>
#define LOG(x) std::cout<<x<<std::endl

int main (){
    LinkedList L1(1);
    L1.append(2);
    L1.append(30);
    L1.append(4);
    LOG(L1.getLength());
    L1.deleteLast();
    //LOG(L1.getLength());
}