//bankwithlist.cpp
//Matthew Yamamoto
//02/24/17
//This program will be the driver that tests our bank account list

#include<iostream>
#include "singlylinked.h"
#include "BasicAccount.h"
#include <string>
using namespace std; 
using std::endl;
using std::cout;
using std::cin;



// FIXED ADD NODE FUNCTION GOES BENEATH HERE
//void add(SLinkedList L, BasicAccount b){}
SNode<BasicAccount>* findByAcct(SNode<BasicAccount>* data, long int acct, SLinkedList<BasicAccount>* l){
    SNode<BasicAccount>* p = l->getHead();  
    if(p ==NULL){
        return p; 
    }
    
    cout << "acct is : " << acct << endl; 
    while(p->data.getAccountNum() != acct){
        p = p->next;
    }
    return p;

}

SNode<BasicAccount>* findByName(SNode<BasicAccount>* data, string nm, SLinkedList<BasicAccount>* l){
    SNode<BasicAccount>* p = l->getHead();  
    if(p ==NULL){
        return p; 
    }
    
    cout << "name is : " << nm << endl; 
    while(p->data.getName() != nm){
        p = p->next;
    }
    return p;

}

template <typename T>
SNode<T>* addNewAccount(SLinkedList<BasicAccount>* l, BasicAccount ba){
    SNode<T>* ptr = l->getHead();
    if(ptr == NULL){
        ptr = l.append(ba);
        return ptr;
    }
    while(ptr->data.getAccountNum() < ba.getAccountNum()){
        ptr = l->advance(ptr, 1);
        if(!ptr) break;
    }
    if(ptr && ptr->data.getAccountNum() == ba.getAccountNum()) return NULL;
    if(ptr == NULL){
        ptr = l->append(ba);
        return ptr;
    }
    ptr = l->insert(ba, ptr);
    return ptr;
}



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

		list.append(acc);
		list.printAll();

		cout << "Account added successfully" << endl;
	}
	if(flag == 'f'){
		char flag2 = 'a';
		cout << "Search by name(n) or account id(i)?" << endl;
		cin >> flag2;

		if(flag2 == 'n'){
		    cout << "What is your name (see hints above^^): "; 
	        string name;  
	        cin>> name; 
		    SNode<BasicAccount>* ptr1 = list.getHead(); 
            SNode<BasicAccount>* ptr = findByName(ptr1, name, &list);
            cout<< "Welcome "<< ptr->data.getName() << "!"<< endl; 
		}

		if(flag2 == 'i'){
		    cout << "What is your account number (see hints above^^): "; 
	        long int a =0; 
	        cin>> a; 
		    SNode<BasicAccount>* ptr1 = list.getHead(); 
            SNode<BasicAccount>* ptr = findByAcct(ptr1, a, &list);
            cout<< "Welcome "<< ptr->data.getName() << "!"<< endl; 
		}

		else{
		cout << "Invalid input" << endl;
		}
		
	}
	if(flag == 'd'){
		cout << "Delete by name(n) or account id(i)?" << endl;
		char flag2 = 'a';
		cin >> flag2;

		if(flag2 == 'n'){
		    cout << "What is your name? (see hints above^^): "; 
	        string name;  
	        cin>> name; 
		    SNode<BasicAccount>* ptr1 = list.getHead(); 
            SNode<BasicAccount>* ptr = findByName(ptr1, name, &list);
            cout<< "Erasing "<< ptr->data.getName() << endl; 
            list.erase(ptr);
            if (list.getHead()==NULL){
                cout << "No More Accounts to delete! Thank you come again\n"; 
            } 
		}

		if(flag2 == 'i'){
		    cout << "What is your account number? (see hints above^^): "; 
	        long int acctn =0; 
	        cin>> acctn; 
		    SNode<BasicAccount>* ptr1 = list.getHead(); 
            SNode<BasicAccount>* ptr = findByAcct(ptr1, acctn, &list);
            cout<< "Erasing "<< ptr->data.getName() << endl; 
            list.erase(ptr);
            if (list.getHead()==NULL){
                cout << "No More Accounts to delete! Thank you come again\n"; 
            } 
            // list.printAll(); 
		}
		
	}
	
	// "1 - Create account, 2 - Find a customer, 3 - exit
        


        // Create Account:
        // enter Account ID:
        // enter Account Name:
        // Enter new Account balance:
        // // create ba object, check if the same if exists in list,
        //          if it exists, return error, continue to next loop
        //          if it is valid, insert and let teller know success



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
