//driver.cpp
//Matthew Yamamoto
//02/24/17

//#include "singlylinked.h"
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

void sort(SLinkedList list,BasicAccount* ba){
	Snode* current = list.getHead();

	while(current){
		if(ba->getid == current->getid){
		list.insert(ba, current)
		return 0;
		}
		current = current->next;
	}
	return 0;
}


main(){

	SLinkedList();
	
	for(int i = 0; i < 3; i++){
		BasicAccount b1 = BasicAccount();
		SLinkedList::copy();
	}

	SLinkedList::find();
	SLinkedList::find();

	SLinkedList::erase();
	SLinkedList::erase();

}
