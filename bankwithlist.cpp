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
    
    // MAIN LOOP GOES HERE
    while(true){
        // Greet the teller, prompt what he would like to do
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
