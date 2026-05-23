#include "LinkedList.hpp"
#include <iostream>
#define LOG(x) std::cout<<x<<std::endl

int main (){
    LinkedList L1(10);
    L1.append(20);
    L1.append(30);
    L1.append(40);
    L1.reverse();
    L1.print();
}