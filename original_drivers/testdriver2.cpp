/* File: testdriver2.cpp
 * Name: Paulo Lemus
 * Date: 2/24/2017
 */

#include <iostream>
#include "singlylinked.h"
#include "BasicAccount.h"
using std::cin;
using std::cout;
using std::endl;


int main(){

    SLinkedList<BasicAccount> list;

    BasicAccount ba0;
    ba0.setAccountNum(500);
    ba0.setName("Alice");
    ba0.setBalance(400);

    BasicAccount ba1;
    ba1.setAccountNum(10000);
    ba1.setName("Tom");
    
    list.append(ba0);
    list.append(ba1);

    list.printAll();

    /* Here is an example of how to use the find
     * function and how to use it to interact with
     * a bankAccount in the list.
     * Kind of dumb right now, I know.
     */
    list.find(ba1)->data.setBalance(1234);

    list.printAll();

    cout << "Success!" << endl;
    return 0;
}
