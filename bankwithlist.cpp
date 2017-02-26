//bankwithlist.cpp
//Matthew Yamamoto
//02/24/17
//This program will be the driver that tests our bank account list

#include<iostream>
#include "singlylinked.h"
#include "BasicAccount.h"
#include <string>
using std::endl;
using std::cout;
using std::cin;


// FIXED ADD NODE FUNCTION GOES BENEATH HERE



int main(){

	SLinkedList<BasicAccount> list; //creates a list of type BasicAccount
//<<<<<<< HEAD
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
//=======

    // MAIN LOOP GOES HERE
	

  //  cout << "\n\nGoodbye!\n\n";
//>>>>>>> 1cf043e68af86f1aece598fa18a07a083cd1f912
	return 0;
}
