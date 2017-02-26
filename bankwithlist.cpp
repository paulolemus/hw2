/* File: bankwithlist.cpp
 * Name: Paulo Lemus
 * Date: 02/24/17
 * Team: Sandwich
 */

#include <iostream>
#include <string>
#include "BasicAccount.h"
#include "singlylinked.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

/* AddNewAccount:
 * This functions adds an account to the list
 * sorted by ID number. It searches for an id that
 * is greater than it, and inserts a new node before it.
 * If there are none or if list is empty, it appends the node.
 */
template <typename T>
SNode<T>* addNewAccount(SLinkedList<T>& list, BasicAccount& ba);


/* SearchById && SearchByName:
 * These functions operate very similarly.
 * They first check if the head is null.
 * Otherwise, they iterate through each node comparing
 * the given string or id to the node name or id.
 * If there is a match, a ptr to the node is returned.
 * Otherwise, NULL is returned.
 */
template <typename T>
SNode<T>* searchById(SLinkedList<T>& list, long int id);
template <typename T>
SNode<T>* searchByName(SLinkedList<T>& list, string name);


/* depositOrWithdraw:
 * Prompts user to withdraw or deposit money into an
 * account given via pointer to node.
 */
template <typename T>
void depositOrWithdraw(SNode<T>* ptr);



int main(){

    SLinkedList<BasicAccount> list;

    while(true){
        int choice;

        // Clean introduction
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "\tWelcome to Sandwich Banking Services.\n\n";
        cout << "What operation would you like to perform?\n";
        cout << "1 - Add new Account\n";
        cout << "2 - Find an existing customer\n";
        cout << "3 - Delete an existing customer\n";
        cout << "4 - Burn everything and shutdown\n";
        cin >> choice;

        /* Break loop to exit code */
        if(choice == 4) break;

        else if(choice == 3){
            string confirm;
            string nameOrId;
            string searchStr;
            SNode<BasicAccount>* ptr;

            cout << "\n\nWould you like to delete by id or name? ";
            cin >> nameOrId;

            if(nameOrId == "id"){
                cout << "\nEnter id: ";
                cin >> searchStr;
                ptr = searchById(list, std::stol(searchStr));
            }
            else if(nameOrId == "name"){
                cout << "\nEnter name: ";
                cin >> searchStr;
                ptr = searchByName(list, searchStr);
            }
            else{
                cout << "\nInvalid command\n";
                cout << "Press enter to continue";
                cin.ignore();
                cin.get();
                continue;
            }
            if(ptr == NULL){
                cout << "\nCould not locate account.\n";
                cout << "Press enter to continue";
                cin.ignore();
                cin.get();
                continue;
            }
            cout << "Found account. Details below:\n\n";
            cout << ptr->data;
            cout << "\nAre you sure you want to delete the account? ";
            cin >> confirm;
            if(confirm[0] == 'y' || confirm[0] == 'Y'){
                list.erase(ptr);
                cout << "\nAccount deleted.\n\n";
            }
            else cout << "\nNo action taken.\n\n";
        }

        /* Find an existing account by name or ID.
         * This choice allows the user to select
         * the desired method of searching, then prompts
         * user to enter a name or id to searh by.
         * If a valid account is found, it also prompts user
         * if he/she would like to deposit or withdraw money.
         */
        else if(choice == 2) {
            string nameOrId;
            string searchStr;
            SNode<BasicAccount>* ptr;

            cout << "\n\nWould you like to search by id or name? ";
            cin >> nameOrId;

            if(nameOrId == "id"){
                cout << "\nEnter id: ";
                cin >> searchStr;
                ptr = searchById(list, std::stol(searchStr));
            }
            else if(nameOrId == "name"){
                cout << "\nEnter name: ";
                cin >> searchStr;
                ptr = searchByName(list, searchStr);
            }
            else{
                cout << "\nInvalid command\n";
                cout << "Press enter to continue";
                cin.ignore();
                cin.get();
                continue;
            }
            if(ptr == NULL){
                cout << "\nCould not locate account.\n";
                cout << "Press enter to continue";
                cin.ignore();
                cin.get();
                continue;
            }
            cout << "Found account. Details below:\n\n";
            cout << ptr->data;
            depositOrWithdraw(ptr);
        }

        /* Add a new account to the list. This first checks
         * if the account is available by ID.
         * If it is, it adds it, otherwise it indicates the
         * account id is taken.
         */
        else if(choice == 1){
            long int id;
            string   name;
            float    balance;
            SNode<BasicAccount>* ptr;

            cout << "\nTo create a new account, provide the following:\n";
            cout << "Account id\t: ";
            cin >> id;
            cout << "Account name\t: ";
            cin >> name;
            cout << "Account balance\t: ";
            cin >>balance;
            BasicAccount ba(id, name, balance);
            ptr = addNewAccount(list, ba);
            if(ptr == NULL){
                cout << "\nFailed to add account. ID already exists.\n";
            }
            else{
                cout << "\nAccount successfully added.\n";
                cout << ptr->data;
            }
        }
        cout << "\nPress Enter to continue";
        cin.ignore();
        cin.get();
    }

    cout << "\n\nGoodbye!\n\n";
    return 0;
}


template <typename T>
SNode<T>* addNewAccount(SLinkedList<T>& list, BasicAccount& ba){
    SNode<T>* ptr = list.getHead();
    if(ptr == NULL){
        ptr = list.append(ba);
        return ptr;
    }
    while(ptr->data.getAccountNum() < ba.getAccountNum()){
        ptr = list.advance(ptr, 1);
        if(!ptr) break;
    }
    if(ptr && ptr->data.getAccountNum() == ba.getAccountNum()) return NULL;
    if(ptr == NULL){
        ptr = list.append(ba);
        return ptr;
    }
    ptr = list.insert(ba, ptr);
    return ptr;
}

template <typename T>
SNode<T>* searchById(SLinkedList<T>& list, long int id){
    SNode<T>* ptr = list.getHead();
    if(ptr == NULL) return NULL;
    while(ptr->data.getAccountNum() != id){
        ptr = list.advance(ptr, 1);
        if(!ptr) return NULL;
    }
    return ptr;
}
template <typename T>
SNode<T>* searchByName(SLinkedList<T>& list, string name){
    SNode<T>* ptr = list.getHead();
    if(ptr == NULL) return NULL;
    while(ptr->data.getName() != name){
        ptr = list.advance(ptr, 1);
        if(!ptr) return NULL;
    }
    return ptr;
}
template <typename T>
void depositOrWithdraw(SNode<T>* ptr){
    int choice;
    float amount;
    cout << "\nWould you like to withdraw or deposit from this account?\n";
    cout << "1 - Withdraw\n";
    cout << "2 - Deposit\n";
    cout << "3 - Take no action\n";
    cin >> choice;

    if(choice == 1){
        int check;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        check = ptr->data.withdraw(amount);
        if(check == -1) cout << "Insufficient fundsi\n";
        else if(check == -2) cout << "An unknown error has occured\n";
        else{
            cout << "New balance: " << ptr->data.getBalance() << endl;
        }
    }
    else if(choice == 2){
        cout << "Enter amount to deposit: ";
        cin >> amount;
        ptr->data.deposit(amount);
        cout << "\nNew balance: " << ptr->data.getBalance() << endl;
    }
    else{
        cout << "\nNo action taken\n";
    }
}
