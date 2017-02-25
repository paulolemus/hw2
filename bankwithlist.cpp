//bankwithlist.cpp
//Matthew Yamamoto
//02/24/17
//This program will be the driver that tests our bank account list

//#include "singlylinked.h"
#include<iostream>
using std::endl;

void sort(SLinkedList list,BasicAccount* ba){	//function sort to add new basicaccounts
	Snode* current = list.getHead();

	while(current){
		if(ba->getid > current->getid){	//if basicaccount id is greater than current id
		list.insert(ba, current)	//insert basic account and end
		return 0;
		}
		if(ba->getid == current->getid){	//if id is equal to, account number
			std::cout << "Account number invalid" << endl;	//invalid, end
			return 0;
		}
		current = current->next;	//iterate
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
