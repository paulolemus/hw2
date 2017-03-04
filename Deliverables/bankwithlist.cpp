//bankwithlist.cpp
//Matthew Yamamoto & Jessica Grazziotin
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

///// FUNCTION DECLARATIONS //////////

//FINDS NODE BY ACCOUNT NUMBER
SNode<BasicAccount>* findByAcct(long int acct, SLinkedList<BasicAccount>& L);

//FINDS NODE BY NAME
SNode<BasicAccount>* findByName(string nm, SLinkedList<BasicAccount>& L);

// FIXED ADD NODE FUNCTION GOES BENEATH HERE
SNode<BasicAccount>* addNewAccount(SLinkedList<BasicAccount>& L, BasicAccount& b);

///// MAIN DRIVER //////////

int main(){

	SLinkedList<BasicAccount> list; //creates a list of type BasicAccount
   	int flag = 10;//flag for add,find,delete

    // MAIN LOOP GOES HERE
    while(flag != 0){
	    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "Welcome, please enter:" << endl;
        cout << "1 for add" << endl;
        cout <<	"2 for find" << endl;
	cout << "3 for delete" << endl;
	cout << "0 for quit" << endl;// Greet the teller, prompt what he would like to do
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
			cout << "Adding account failed, account number already taken" << endl;
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

			//VALID NAME
			if(findByName(s1, list)){
				int flag4 = 0;
				float ammount = 0;
				cout << findByName(s1, list)->data;
				cout << "Valid account found, would you like to deposit(1) or withdraw(2), or no action(0)?" << endl;
				cin >> flag4;
				//DEPOSIT	
				if(flag4 == 1){
					cout << "How much would you like to deposit?" << endl;
					cin >> ammount;
					findByName(s1, list)->data.deposit(ammount);

				}
				//WITHDRAW
				if(flag4 == 2){
					cout << "How much would you like to withdraw?" << endl;
					cin >> ammount;
					findByName(s1, list)->data.withdraw(ammount);

				}
			}
			else{
			cout << "Could not find account" << endl;
			}

		}
		//FIND ID branch
		if(flag2 == 2){
			long int i1;
			cout << "Please enter id" << endl;
			cin >> i1;
			if(findByAcct(i1,list)){ //find if id entered matches an account
			
			//account found
				int flag5;
				float ammount = 0;
				cout << findByAcct(i1,list)->data;
				cout << "Valid Account found, would you like to deposit(1), or withdraw(2), or no action(0)?" << endl;
				cin >> flag5;
				//Deposit
				if(flag5 == 1){
					cout << "How much would you like to deposit?" << endl;
					findByAcct(i1,list)->data.deposit(ammount);
				}
				//Withdraw
				if(flag5 == 2){
					cout << "How much would you like to withdraw?" << endl;
					findByAcct(i1,list)->data.withdraw(ammount);
				}
			
			}
			else{
			cout << "Could not find account" << endl;
			}

		}
		cout << "Press enter to continue" << endl;
		cin.ignore();
		cin.get();
	}

	//DELETE branch, find an account by name or id and deletes
	if(flag == 3){
		int flag3 = 0;
		cout << "Delete by name(1) or account id(2)?" << endl;
		cin >> flag3;
		//DELETE by name
		if(flag3 == 1){

			cout << "What is your name? "; 
	        string name;  
	        cin>> name; 
            
		SNode<BasicAccount>* ptr = findByName(name, list);
            	if(ptr == 0){
			cout << "Could not find account" << endl;
		}
		if(ptr != 0){
			cout<< "Erasing "<< ptr->data.getName() << endl; 
			list.erase(ptr);
		}
		
		}
		//DELETE by id
		if(flag3 == 2){
			cout << "What is your account number? "; 
	        	long int acctn =0; 
	        	cin>> acctn; 
            
			SNode<BasicAccount>* ptr = findByAcct(acctn, list);
            
			if(ptr == 0){
				cout << "Could not find account" << endl;
			}
			if(ptr != 0){
			cout<< "Erasing "<< ptr->data.getName() << endl; 
            		list.erase(ptr);
			}
		}

	cout << "Press enter to continue" << endl;
	cin.ignore();
	cin.get();
	}
    }
	

    cout << "\n\nGoodbye!\n\n";
	return 0;
}



///// FUNCTIONS //////////

//FINDS NODE BY ACCOUNT NUMBER
SNode<BasicAccount>* findByAcct(long int acct, SLinkedList<BasicAccount>& L){
    SNode<BasicAccount>* p = L.getHead();  
    if(p == NULL){
        return p; 
    } 
    while(p){
	    if(p->data.getAccountNum() == acct){
	    	return p;
	    }
        p = p->next;
    }
    return p;
}

//FINDS NODE BY NAME
SNode<BasicAccount>* findByName(string nm, SLinkedList<BasicAccount>& L){
    SNode<BasicAccount>* p = L.getHead();  
    if(p == NULL){
        return p; 
    }
    while(p){
    if(p->data.getName() == nm){
    	return p;
    }
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