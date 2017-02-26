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
SNode<BasicAccount>* findByAcct(SNode<BasicAccount>* data, float acct, SLinkedList<BasicAccount>* l){
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



// FIXED ADD NODE FUNCTION GOES BENEATH HERE
SNode<BasicAccount>* addNewAccount(SLinkedList<BasicAccount>& L, BasicAccount& b){
	SNode<BasicAccount>* curr = L.getHead();
	if(curr == NULL){
		curr = L.append(b);
		return curr;
	}
	while(curr->data.getAccountNum() < b.getAccountNum()){
		curr = L.advance(curr, 1);
		if(!curr) break;
	}	
	if(curr && curr->data.getAccountNum() == b.getAccountNum())return NULL;

	if(curr == NULL){
		curr = L.append(b);
		return curr;
	}
	curr = L.insert(b, curr);
	return curr;
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
		SNode<BasicAccount>* ptr;
		cout << "Please input account number" << endl;
		cin >> accnum;
		cout << "Please input account name" << endl;
		cin >> accname;
		cout << "Please input account balance" << endl;
		cin >> accbalance;
		BasicAccount ba(accnum, accname, accbalance);
		ptr = addNewAccount(list, ba);	
		if(ptr == NULL){
			cout << "Adding account failed" << endl;
		}
		else{
			cout << "Account added successfuly" << endl;
			cout << ptr->data;
		}
		cout << "\nPress Enter to continue";
		cin.ignore();
		cin.get();
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
		//	findByName();
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
	        float a =0; 
	        cin>> a; 
		    SNode<BasicAccount>* ptr1 = list.getHead(); 
            SNode<BasicAccount>* ptr = findByAcct(ptr1, a, &list);
            cout<< "Welcome "<< ptr->data.getName() << "!"<< endl; 
		}

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
