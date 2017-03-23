/* File: testdriver2.cpp
2	 * Name: Paulo Lemus
3	 * Date: 2/24/2017
4	 */
5	
6	#include <iostream>
7	#include "singlylinked.h"
8	#include "BasicAccount.h"
9	using std::cin;
10	using std::cout;
11	using std::endl;
12	
13	
14	int main(){
15	
16	    SLinkedList<BasicAccount> list; //creates a list of type BasicAccount
17	
18	    BasicAccount ba0; //constructs a basic acct class ba0
19	    ba0.setAccountNum(500);
20	    ba0.setName("Alice");
21	    ba0.setBalance(400);
22	
23	    BasicAccount ba1; 
24	    ba1.setAccountNum(10000);
25	    ba1.setName("Tom");
26	    ba1.setBalance(1234);
27	    
28	    BasicAccount ba2; 
29	    ba2.setAccountNum(15000);
30	    ba2.setName("Jerry");
31	    ba2.setBalance(888);
32	    
33	    BasicAccount ba3; 
34	    ba3.setAccountNum(20000);
35	    ba3.setName("Bob");
36	    ba3.setBalance(999);
37	    
38	    list.append(ba0);
39	    list.append(ba1);
40	    list.append(ba2);
41	    list.append(ba3);
42	
43	    cout << "-----printing all after appending all" << endl; 
44	    list.printAll();
45	
46	    /* Here is an example of how to use the find
47	     * function and how to use it to interact with
48	     * a bankAccount in the list.
49	     * Kind of dumb right now, I know.
50	     */
51	    // list.find(ba1)->data.setBalance(1234);
52	    float a = list.find(ba1)->data.getAccountNum();
53	    float b = list.find(ba1)->data.getBalance();
54	    cout << "--ba1's account is: "<< a << endl; 
55	    cout << "--ba1's balance is: "<< b << endl; 
56	    cout << "----printing from ba2"<< endl; 
57	    list.printAll(list.find(ba2));
58	
59	
60	    cout << "----erasing ba0 and printing all" << endl;
61	    list.erase(ba0);
62	    list.printAll();
63	
64	    cout << "Success!" << endl;
65	    return 0;
66	}
