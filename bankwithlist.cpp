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
void add(SLinkedList<BasicAccount> L, BasicAccount b){
	SNode<BasicAccount>* curr = L.getHead();
	if(curr == NULL){
		L.append(b);
	}
	while(curr){
		if(curr->data.getAccountNum() > b.getAccountNum()){
			L.add(b, curr);
		}
		curr = curr->next;
	}
}


int main(){

	SLinkedList<BasicAccount> list; //creates a list of type BasicAccount
   	int flag = 10;//flag for add,find,delete

    // MAIN LOOP GOES HERE
    while(flag != 0){
        cout << "Welcome, please enter 1 for add, 2 for find, 3 for delete, 0 for quit" << endl;// Greet the teller, prompt what he would like to do
	cin >> flag;

	//ADD branch, adds accounts that don't have an id already taken
	if(flag == 1){
		long int accnum = 0;	//enter account info
		std::string accname;
		float accbalance = 0;
		cout << "Please input account number" << endl;
		cin >> accnum;
		cout << "Please input account name" << endl;
		cin >> accname;
		cout << "Please input account balance" << endl;
		cin >> accbalance;
		BasicAccount acc = BasicAccount(accnum, accname, accbalance);
		add(list, acc);	
		//cout << "Account added successfully" << endl;
		//cout << "Adding account failed" << endl;
	}
	//FIND branch, finds an account by name or id, then deposit or withdraw if valid
	if(flag == 2){
		int flag2 = 0;
		cout << "Search by name(1) or account id(2)?" << endl;
		cin >> flag2;
		
		//FIND NAME branch	
		if(flag2 == 1){
			std::string s1;
			cout << "Please enter name" << endl;
			cin >> s1;
		//	search();
			//VALID NAME
		//	if(search()){
				int flag4 = 0;
				cout << "Valid account found, would you like to deposit(1) or withdraw(2)?" << endl;
				cin >> flag4;
				//DEPOSIT	
				if(flag4 == 1){}
				//WITHDRAW
				if(flag4 == 2){}
		//	}

		}
		//FIND ID branch
		if(flag2 == 2){
			long int i1;
			cout << "Please enter id" << endl;
			cin >> i1;
			//find(i1);//find if id entered matches an account
			//account found
			//if(){
				int flag5;
				cout << "Valid Account found, would you like to deposit(1), or withdraw(2)" << endl;
				cin >> flag5;
				//Deposit
				if(flag5 == 1){}
				//Withdraw
				if(flag5 == 2){}
			
			//}

		}
		//INVALID
		else{
		cout << "Invalid input" << endl;
		}
		
	}

	//DELETE branch, find an account by name or id and deletes
	if(flag == 3){
		int flag3 = 0;
		cout << "Delete by name(1) or account id(2)?" << endl;
		cin >> flag3;
		//DELETE by name
		if(flag3 == 1){}
		//DELETE by id
		if(flag3 == 2){}
		else{}
	}
	
	// "1 - Create account, 2 - Find a customer, 3 - exit
        

        // Create Account:
        // enter Account ID:
        // enter Account Name:
        // Enter new Account balance:
        // // create ba object, check if the same if exists in list,
        //          if it exists, return error, continue to next loop
        //          if it is valid, insert and let teller know success

        // Find a customer:
        // "would you like to seach by account id or name?
        // 1 - ID, 2 - name
        //
        // ID: 
        //      have user enter id. Give it and the list to jessies 
        //      find by id function.
        //       
        //      next prompt user if he would like to withdraw, deposit
        //      or return.
        //
        // name: Same thing as above but use jessies find by name function
        //
    }
	

    cout << "\n\nGoodbye!\n\n";
	return 0;
}
