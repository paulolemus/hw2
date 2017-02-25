//driver.cpp
//Matthew Yamamoto
//02/24/17

#include <iostream>
#include "singlylinked.h"
using std::cin;
using std::cout;
using std::endl;


int main(){

    SLinkedList<int> list;
    SNode<int>* ptr0 = list.insert(10, list.getHead());
    SNode<int>* ptr1 = list.add(20, list.getHead());


    if(ptr0 == list.getHead()) cout << "ptr0 is head" << endl;
    if(ptr1 == list.getHead()) cout << "ptr0 is head" << endl;
    else cout << "ptr 1 is not head" << endl;

    list.printAll();
    list.printAll(ptr1);
    
    cout << "Success!" << endl;
    return 0;
}
