#include "LinkedList.hpp"
#include <iostream>
#define LOG(x) std::cout<<x<<std::endl

int main (){
    LinkedList* L1= new LinkedList (10);
    L1->append(12);
    LOG(L1->getHead()->value);
    return 0;
}