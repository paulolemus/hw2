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

    SLinkedList<int> list1;
    SNode<int>* ptr2 = list1.append(1);
    SNode<int>* ptr3 = list1.append(2);
    SNode<int>* ptr4 = list1.append(3);
    SNode<int>* ptr5 = list1.append(4);
    SNode<int>* ptr6 = list1.append(5);
    SNode<int>* ptr7 = list1.append(6);


    if(ptr0 == list.getHead()) cout << "ptr0 is head" << endl;
    if(ptr1 == list.getHead()) cout << "ptr0 is head" << endl;
    else cout << "ptr 1 is not head" << endl;
    list.getHead();
    list.getTail();
    
    list.printAll();
    list.printAll(ptr1);

    cout << "---------------------------" << endl;
    if(ptr2 == list1.getHead()) cout << "ptr2IsHead" << endl;
    if(ptr3 == list1.getHead()) cout << "ptr3IsHead" << endl;
    if(ptr7 == list1.getTail()) cout << "ptr4IsTail" << endl;
    list1.printAll();
    cout << "3: " << list1.advance(list1.getHead(), 2)->data << endl;
   
    SNode<int>* ptr8 = list1.find(6, list1.getHead());
    cout << "WhatFound: " << ptr8->data << endl;
    if(ptr8 == list1.getTail()) cout << "ptr8IsTail" << endl;
    ptr8 = list1.find(5);
    cout << ptr8->data << endl;
    list1.erase(ptr2);
    list1.erase(6);
    list1.erase(4);
    cout << list1.getHead()->data << endl;
    cout << list1.getTail()->data << endl << endl;
    list1.printAll();

    cout << "Success!" << endl;
    return 0;
}
