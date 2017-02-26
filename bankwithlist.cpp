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
//void add(SLinkedList L, BasicAccount b){}


int main(){

	SLinkedList<BasicAccount> list; //creates a list of type BasicAccount
   	char flag = 'b';

    // MAIN LOOP GOES HERE
    while(flag != 'q'){
        cout << "a = add, f = find, d = delete, q = quit" << endl;// Greet the teller, prompt what he would like to do
	cin >> flag;


	if(flag == 'a'){
		long int accnum = 0;
		std::string accname;
		float accbalance = 0;
		cout << "Please input account number" << endl;
		cin >> accnum;
		cout << "Please input account name" << endl;
		cin >> accname;
		cout << "Please input account balance" << endl;
		cin >> accbalance;
		BasicAccount acc = BasicAccount(accnum, accname, accbalance);
		//add(list, acc);
		cout << "Account added successfully" << endl;
	}
	if(flag == 'f'){
		char flag2 = 'a';
		cout << "Search by name(n) or account id(i)?" << endl;
		cin >> flag2;

		if(flag2 == 'n'){}
		if(flag2 == 'i'){}
		else{
		cout << "Invalid input" << endl;
		}
		
	}
	if(flag == 'd'){
		cout << "Delete by name() or account id(i)?" << endl;
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
