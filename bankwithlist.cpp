//bankwithlist.cpp
//Matthew Yamamoto
//02/24/17
//This program will be the driver that tests our bank account list
#include<iostream>

#include "singlylinked.h"
#include "BasicAccount.h"
#include <string>
// using std::endl;
using namespace std; 
// SNode<T>* SLinkedList<T>::erase(SNode<T>* p){
// void SLinkedList<T>::printAll(SNode<T>* p){
// template <>
// void SLinkedList<struct BasicAccount>::sort(SLinkedList list, BasicAccount* ba){
// // void sort(SLinkedList list,BasicAccount* ba){	//function sort to add new basicaccounts
// 	SNode<struct BasicAccount>* current = list.getHead();

// 	while(current){
// 		if(ba->getAccountNum() > current->data->getid()){	//if basicaccount id is greater than current id
// 		list.insert(ba, current)	//insert basic account and end
// 		return 0;
// 		}
// 		if(ba->getid == current->data->getAccountNum()){	//if id is equal to, account number
// 			std::cout << "Account number invalid" << endl;	//invalid, end
// 			return 0;
// 		}
// 		current = current->next;	//iterate
// 	}

// 	return 0;
// }



template <typename T>
SNode<T>* SLinkedList<T>::findByAcct(const T& data, float acct){
    SNode<T>* p = head;  
    if(p ==NULL){
        return p; 
    }
    
    cout << "acct is : " << acct << endl; 
    while(p->data.getAccountNum() != acct){
        p = p->next;
    }
    return p;
}


int main(){

	// SLinkedList();
	float a =0; 
	SLinkedList<BasicAccount> list; //creates a list of type BasicAccount
	char flag = 'a';

while(flag !='q')	{

	cout << "a = add, f = find, d = delete, q = quit" << endl;
	cin >> flag;

	if(flag == 'a'){}
	if(flag == 'f'){}
	if(flag == 'd'){}
	if(flag == 'q'){}
	

 //   BasicAccount ba0; //constructs a basic acct class ba0
   // ba0.setAccountNum(500);
   // ba0.setName("Alice");
   // ba0.setBalance(400);
    
  //  BasicAccount ba1; 
//    ba1.setAccountNum(10000);
  //  ba1.setName("Tom");
//    ba1.setBalance(1234);
    
    
    
    //list.append(ba0);
  //  list.append(ba1);
//	list.printAll();
	
//	cout << "What is your account number (see hints above^^): "; 
//	cin>> a; 
// 	cout << "debug: input was: "<<a << endl; 
	
	
// 	float a = list.find(ba1)->data.getAccountNum();
// 	float aByAcct = list.findByAcct(ba1, ac)->data.getAccountNum(); 
// 	cout << a << endl; 

   // SNode<BasicAccount>* ptr = list.findByAcct(ba1, a);
   // cout<< "Welcome "<< ptr->data.getName() << "!"<< endl; 
    
}
	return 0;
}
