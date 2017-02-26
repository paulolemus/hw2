{"filter":false,"title":"bankwithlist.cpp","tooltip":"/bankwithlist.cpp","undoManager":{"mark":100,"position":100,"stack":[[{"start":{"row":0,"column":0},"end":{"row":226,"column":1},"action":"insert","lines":["//bankwithlist.cpp","//Matthew Yamamoto","//02/24/17","//This program will be the driver that tests our bank account list","","#include<iostream>","#include \"singlylinked.h\"","#include \"BasicAccount.h\"","#include <string>","using namespace std; ","using std::endl;","using std::cout;","using std::cin;","","","","// FIXED ADD NODE FUNCTION GOES BENEATH HERE","//void add(SLinkedList L, BasicAccount b){}","SNode<BasicAccount>* findByAcct(SNode<BasicAccount>* data, float acct, SLinkedList<BasicAccount>* l){","    SNode<BasicAccount>* p = l->getHead();  ","    if(p ==NULL){","        return p; ","    }","    ","    cout << \"acct is : \" << acct << endl; ","    while(p->data.getAccountNum() != acct){","        p = p->next;","    }","    return p;","","}","","SNode<BasicAccount>* findByName(SNode<BasicAccount>* data, string nm, SLinkedList<BasicAccount>* l){","    SNode<BasicAccount>* p = l->getHead();  ","    if(p ==NULL){","        return p; ","    }","    ","    cout << \"name is : \" << nm << endl; ","    while(p->data.getName() != nm){","        p = p->next;","    }","    return p;","","}","","","","// FIXED ADD NODE FUNCTION GOES BENEATH HERE","SNode<BasicAccount>* addNewAccount(SLinkedList<BasicAccount>& L, BasicAccount& b){","\tSNode<BasicAccount>* curr = L.getHead();","\tif(curr == NULL){","\t\tcurr = L.append(b);","\t\treturn curr;","\t}","\twhile(curr->data.getAccountNum() < b.getAccountNum()){","\t\tcurr = L.advance(curr, 1);","\t\tif(!curr) break;","\t}\t","\tif(curr && curr->data.getAccountNum() == b.getAccountNum())return NULL;","","\tif(curr == NULL){","\t\tcurr = L.append(b);","\t\treturn curr;","\t}","\tcurr = L.insert(b, curr);","\treturn curr;","}","","","int main(){","","\tSLinkedList<BasicAccount> list; //creates a list of type BasicAccount","   \tint flag = 10;//flag for add,find,delete","","    // MAIN LOOP GOES HERE","    while(flag != 0){","        cout << \"Welcome, please enter 1 for add, 2 for find, 3 for delete, 0 for quit\" << endl;// Greet the teller, prompt what he would like to do","\tcin >> flag;","","\t//ADD branch, adds accounts that don't have an id already taken","\tif(flag == 1){","\t\tlong int accnum = 0;\t//enter account info","\t\tstd::string accname;","\t\tfloat accbalance = 0;","\t\tSNode<BasicAccount>* ptr;","\t\tcout << \"Please input account number\" << endl;","\t\tcin >> accnum;","\t\tcout << \"Please input account name\" << endl;","\t\tcin >> accname;","\t\tcout << \"Please input account balance\" << endl;","\t\tcin >> accbalance;","\t\tBasicAccount ba(accnum, accname, accbalance);","\t\tptr = addNewAccount(list, ba);\t","\t\tif(ptr == NULL){","\t\t\tcout << \"Adding account failed\" << endl;","\t\t}","\t\telse{","\t\t\tcout << \"Account added successfuly\" << endl;","\t\t\tcout << ptr->data;","\t\t}","\t\tcout << \"\\nPress Enter to continue\";","\t\tcin.ignore();","\t\tcin.get();","\t}","\t//FIND branch, finds an account by name or id, then deposit or withdraw if valid","\tif(flag == 2){","\t\tint flag2 = 0;","\t\tcout << \"Search by name(1) or account id(2)?\" << endl;","\t\tcin >> flag2;","\t\t","\t\t//FIND NAME branch\t","\t\tif(flag2 == 1){","\t\t\tstd::string s1;","\t\t\tcout << \"Please enter name\" << endl;","\t\t\tcin >> s1;","\t\t//\tfindByName();","\t\t\t//VALID NAME","\t\t//\tif(search()){","\t\t\t\tint flag4 = 0;","\t\t\t\tcout << \"Valid account found, would you like to deposit(1) or withdraw(2)?\" << endl;","\t\t\t\tcin >> flag4;","\t\t\t\t//DEPOSIT\t","\t\t\t\tif(flag4 == 1){}","\t\t\t\t//WITHDRAW","\t\t\t\tif(flag4 == 2){}","\t\t//\t}","","\t\t}","\t\t//FIND ID branch","\t\tif(flag2 == 2){","\t\t\tlong int i1;","\t\t\tcout << \"Please enter id\" << endl;","\t\t\tcin >> i1;","\t\t\t//find(i1);//find if id entered matches an account","\t\t\t//account found","\t\t\t//if(){","\t\t\t\tint flag5;","\t\t\t\tcout << \"Valid Account found, would you like to deposit(1), or withdraw(2)\" << endl;","\t\t\t\tcin >> flag5;","\t\t\t\t//Deposit","\t\t\t\tif(flag5 == 1){}","\t\t\t\t//Withdraw","\t\t\t\tif(flag5 == 2){}","\t\t\t","\t\t\t//}","","\t\t}","\t\t//INVALID","\t\tif(flag2 == 'n'){","\t\t    cout << \"What is your name (see hints above^^): \"; ","\t        string name;  ","\t        cin>> name; ","\t\t    SNode<BasicAccount>* ptr1 = list.getHead(); ","            SNode<BasicAccount>* ptr = findByName(ptr1, name, &list);","            cout<< \"Welcome \"<< ptr->data.getName() << \"!\"<< endl; ","\t\t}","","\t\tif(flag2 == 'i'){","\t\t    cout << \"What is your account number (see hints above^^): \"; ","\t        float a =0; ","\t        cin>> a; ","\t\t    SNode<BasicAccount>* ptr1 = list.getHead(); ","            SNode<BasicAccount>* ptr = findByAcct(ptr1, a, &list);","            cout<< \"Welcome \"<< ptr->data.getName() << \"!\"<< endl; ","\t\t}","","\t\telse{","\t\tcout << \"Invalid input\" << endl;","\t\t}","\t\t","\t}","","\t//DELETE branch, find an account by name or id and deletes","\tif(flag == 3){","\t\tint flag3 = 0;","\t\tcout << \"Delete by name(1) or account id(2)?\" << endl;","\t\tcin >> flag3;","\t\t//DELETE by name","\t\tif(flag3 == 1){}","\t\t//DELETE by id","\t\tif(flag3 == 2){}","\t\telse{}","\t}","\t","\t// \"1 - Create account, 2 - Find a customer, 3 - exit","        ","","","        // Create Account:","        // enter Account ID:","        // enter Account Name:","        // Enter new Account balance:","        // // create ba object, check if the same if exists in list,","        //          if it exists, return error, continue to next loop","        //          if it is valid, insert and let teller know success","","","","        // Create Account:","        // enter Account ID:","        // enter Account Name:","        // Enter new Account balance:","        // // create ba object, check if the same if exists in list,","        //          if it exists, return error, continue to next loop","        //          if it is valid, insert and let teller know success","","","        // Find a customer:","        // \"would you like to seach by account id or name?","        // 1 - ID, 2 - name","        //","        // ID: ","        //      have user enter id. Give it and the list to jessies ","        //      find by id function.","        //       ","        //      next prompt user if he would like to withdraw, deposit","        //      or return.","        //","        // name: Same thing as above but use jessies find by name function","        //","    }","\t","","    cout << \"\\n\\nGoodbye!\\n\\n\";","\treturn 0;","}"],"id":2147}],[{"start":{"row":226,"column":1},"end":{"row":227,"column":0},"action":"insert","lines":["",""],"id":2148}],[{"start":{"row":227,"column":0},"end":{"row":227,"column":1},"action":"insert","lines":[":"],"id":2149}],[{"start":{"row":227,"column":1},"end":{"row":227,"column":2},"action":"insert","lines":["w"],"id":2150}],[{"start":{"row":227,"column":2},"end":{"row":227,"column":3},"action":"insert","lines":["q"],"id":2151}],[{"start":{"row":227,"column":3},"end":{"row":228,"column":0},"action":"insert","lines":["",""],"id":2152}],[{"start":{"row":227,"column":3},"end":{"row":228,"column":0},"action":"remove","lines":["",""],"id":2153}],[{"start":{"row":227,"column":2},"end":{"row":227,"column":3},"action":"remove","lines":["q"],"id":2154}],[{"start":{"row":227,"column":1},"end":{"row":227,"column":2},"action":"remove","lines":["w"],"id":2155}],[{"start":{"row":227,"column":0},"end":{"row":227,"column":1},"action":"remove","lines":[":"],"id":2156}],[{"start":{"row":226,"column":1},"end":{"row":227,"column":0},"action":"remove","lines":["",""],"id":2157}],[{"start":{"row":226,"column":1},"end":{"row":227,"column":0},"action":"insert","lines":["",""],"id":2158}],[{"start":{"row":99,"column":21},"end":{"row":100,"column":0},"action":"insert","lines":["",""],"id":2159},{"start":{"row":100,"column":0},"end":{"row":100,"column":3},"action":"insert","lines":["\t\t\t"]}],[{"start":{"row":100,"column":3},"end":{"row":100,"column":4},"action":"insert","lines":["l"],"id":2160}],[{"start":{"row":100,"column":4},"end":{"row":100,"column":5},"action":"insert","lines":["i"],"id":2161}],[{"start":{"row":100,"column":5},"end":{"row":100,"column":6},"action":"insert","lines":["s"],"id":2162}],[{"start":{"row":100,"column":6},"end":{"row":100,"column":7},"action":"insert","lines":["t"],"id":2163}],[{"start":{"row":100,"column":7},"end":{"row":100,"column":8},"action":"insert","lines":["."],"id":2164}],[{"start":{"row":100,"column":8},"end":{"row":100,"column":9},"action":"insert","lines":["p"],"id":2165}],[{"start":{"row":100,"column":9},"end":{"row":100,"column":10},"action":"insert","lines":["r"],"id":2166}],[{"start":{"row":100,"column":10},"end":{"row":100,"column":11},"action":"insert","lines":["i"],"id":2167}],[{"start":{"row":100,"column":11},"end":{"row":100,"column":12},"action":"insert","lines":["n"],"id":2168}],[{"start":{"row":100,"column":12},"end":{"row":100,"column":13},"action":"insert","lines":["t"],"id":2169}],[{"start":{"row":100,"column":8},"end":{"row":100,"column":13},"action":"remove","lines":["print"],"id":2170},{"start":{"row":100,"column":8},"end":{"row":100,"column":18},"action":"insert","lines":["printAll()"]}],[{"start":{"row":101,"column":3},"end":{"row":101,"column":4},"action":"insert","lines":[";"],"id":2171}],[{"start":{"row":101,"column":3},"end":{"row":101,"column":4},"action":"remove","lines":[";"],"id":2172}],[{"start":{"row":100,"column":18},"end":{"row":100,"column":19},"action":"insert","lines":[";"],"id":2173}],[{"start":{"row":100,"column":3},"end":{"row":100,"column":19},"action":"remove","lines":["list.printAll();"],"id":2174}],[{"start":{"row":180,"column":17},"end":{"row":182,"column":2},"action":"insert","lines":["","\t\t\t","\t\t"],"id":2175}],[{"start":{"row":181,"column":3},"end":{"row":182,"column":0},"action":"insert","lines":["",""],"id":2176},{"start":{"row":182,"column":0},"end":{"row":182,"column":3},"action":"insert","lines":["\t\t\t"]}],[{"start":{"row":182,"column":3},"end":{"row":183,"column":0},"action":"insert","lines":["",""],"id":2177},{"start":{"row":183,"column":0},"end":{"row":183,"column":3},"action":"insert","lines":["\t\t\t"]}],[{"start":{"row":181,"column":2},"end":{"row":181,"column":3},"action":"insert","lines":["\t"],"id":2178}],[{"start":{"row":181,"column":3},"end":{"row":190,"column":14},"action":"insert","lines":["cout << \"What is your name? (see hints above^^): \"; ","\t        string name;  ","\t        cin>> name; ","\t\t    SNode<BasicAccount>* ptr1 = list.getHead(); ","            SNode<BasicAccount>* ptr = findByName(ptr1, name, &list);","            cout<< \"Erasing \"<< ptr->data.getName() << endl; ","            list.erase(ptr);","            if (list.getHead()==NULL){","                cout << \"No More Accounts to delete! Thank you come again\\n\"; ","            } "],"id":2179}],[{"start":{"row":192,"column":2},"end":{"row":192,"column":3},"action":"remove","lines":["\t"],"id":2180}],[{"start":{"row":192,"column":1},"end":{"row":192,"column":2},"action":"remove","lines":["\t"],"id":2181}],[{"start":{"row":192,"column":0},"end":{"row":192,"column":1},"action":"remove","lines":["\t"],"id":2182}],[{"start":{"row":191,"column":3},"end":{"row":192,"column":0},"action":"remove","lines":["",""],"id":2183}],[{"start":{"row":191,"column":2},"end":{"row":191,"column":3},"action":"remove","lines":["\t"],"id":2184}],[{"start":{"row":191,"column":1},"end":{"row":191,"column":2},"action":"remove","lines":["\t"],"id":2185}],[{"start":{"row":191,"column":0},"end":{"row":191,"column":1},"action":"remove","lines":["\t"],"id":2186}],[{"start":{"row":190,"column":15},"end":{"row":191,"column":0},"action":"remove","lines":["",""],"id":2187}],[{"start":{"row":193,"column":17},"end":{"row":195,"column":2},"action":"insert","lines":["","\t\t\t","\t\t"],"id":2188}],[{"start":{"row":194,"column":3},"end":{"row":204,"column":32},"action":"insert","lines":["\t\t    cout << \"What is your account number? (see hints above^^): \"; ","\t        float acctn =0; ","\t        cin>> acctn; ","\t\t    SNode<BasicAccount>* ptr1 = list.getHead(); ","            SNode<BasicAccount>* ptr = findByAcct(ptr1, acctn, &list);","            cout<< \"Erasing \"<< ptr->data.getName() << endl; ","            list.erase(ptr);","            if (list.getHead()==NULL){","                cout << \"No More Accounts to delete! Thank you come again\\n\"; ","            } ","            // list.printAll(); "],"id":2189}],[{"start":{"row":194,"column":8},"end":{"row":194,"column":9},"action":"remove","lines":[" "],"id":2190}],[{"start":{"row":194,"column":7},"end":{"row":194,"column":8},"action":"remove","lines":[" "],"id":2191}],[{"start":{"row":194,"column":6},"end":{"row":194,"column":7},"action":"remove","lines":[" "],"id":2192}],[{"start":{"row":194,"column":5},"end":{"row":194,"column":6},"action":"remove","lines":[" "],"id":2193}],[{"start":{"row":194,"column":4},"end":{"row":194,"column":5},"action":"remove","lines":["\t"],"id":2194}],[{"start":{"row":194,"column":3},"end":{"row":194,"column":4},"action":"remove","lines":["\t"],"id":2195}],[{"start":{"row":204,"column":12},"end":{"row":204,"column":15},"action":"remove","lines":["// "],"id":2196}],[{"start":{"row":204,"column":29},"end":{"row":204,"column":30},"action":"insert","lines":["/"],"id":2197}],[{"start":{"row":204,"column":30},"end":{"row":204,"column":31},"action":"insert","lines":["/"],"id":2198}],[{"start":{"row":204,"column":31},"end":{"row":204,"column":32},"action":"insert","lines":["d"],"id":2199}],[{"start":{"row":204,"column":32},"end":{"row":204,"column":33},"action":"insert","lines":["e"],"id":2200}],[{"start":{"row":204,"column":33},"end":{"row":204,"column":34},"action":"insert","lines":["b"],"id":2201}],[{"start":{"row":204,"column":34},"end":{"row":204,"column":35},"action":"insert","lines":["u"],"id":2202}],[{"start":{"row":204,"column":35},"end":{"row":204,"column":36},"action":"insert","lines":["g"],"id":2203}],[{"start":{"row":77,"column":0},"end":{"row":78,"column":0},"action":"insert","lines":["\t    cout << \"\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\";",""],"id":2206,"ignore":true},{"start":{"row":96,"column":33},"end":{"row":96,"column":63},"action":"insert","lines":[", account number already taken"]},{"start":{"row":118,"column":0},"end":{"row":118,"column":18},"action":"remove","lines":["\t\t//\tfindByName();"]},{"start":{"row":120,"column":8},"end":{"row":120,"column":15},"action":"remove","lines":["search("]},{"start":{"row":120,"column":8},"end":{"row":120,"column":27},"action":"insert","lines":["findByName(s1, list"]},{"start":{"row":122,"column":0},"end":{"row":124,"column":0},"action":"insert","lines":["\t\t\t\tfloat ammount = 0;","\t\t\t//\tcout << findByName(s1, list)->data;",""]},{"start":{"row":127,"column":19},"end":{"row":129,"column":19},"action":"remove","lines":["}","\t\t\t\t//WITHDRAW","\t\t\t\tif(flag4 == 2){"]},{"start":{"row":127,"column":19},"end":{"row":139,"column":4},"action":"insert","lines":["","\t\t\t\t\tcout << \"How much would you like to deposit?\" << endl;","\t\t\t\t\tcin >> ammount;","\t\t\t//\t\tfindByName(s1, list)->data.deposit(ammount);","","\t\t\t\t}","\t\t\t\t//WITHDRAW","\t\t\t\tif(flag4 == 2){","\t\t\t\t\tcout << \"How much would you like to deposit?\" << endl;","\t\t\t\t\tcin >> ammount;","\t\t\t//\t\tfindByName(s1, list)->data.deposit(ammount);","","\t\t\t\t"]},{"start":{"row":162,"column":0},"end":{"row":185,"column":0},"action":"remove","lines":["\t\t//INVALID","\t\tif(flag2 == 'n'){","\t\t    cout << \"What is your name (see hints above^^): \"; ","\t        string name;  ","\t        cin>> name; ","\t\t    SNode<BasicAccount>* ptr1 = list.getHead(); ","            SNode<BasicAccount>* ptr = findByName(ptr1, name, &list);","            cout<< \"Welcome \"<< ptr->data.getName() << \"!\"<< endl; ","\t\t}","","\t\tif(flag2 == 'i'){","\t\t    cout << \"What is your account number (see hints above^^): \"; ","\t        float a =0; ","\t        cin>> a; ","\t\t    SNode<BasicAccount>* ptr1 = list.getHead(); ","            SNode<BasicAccount>* ptr = findByAcct(ptr1, a, &list);","            cout<< \"Welcome \"<< ptr->data.getName() << \"!\"<< endl; ","\t\t}","","\t\telse{","\t\tcout << \"Invalid input\" << endl;","\t\t}","\t\t",""]},{"start":{"row":171,"column":0},"end":{"row":172,"column":0},"action":"insert","lines":["<<<<<<< HEAD",""]},{"start":{"row":196,"column":0},"end":{"row":216,"column":19},"action":"remove","lines":["\t\t}","\t\telse{}","\t}","\t","\t// \"1 - Create account, 2 - Find a customer, 3 - exit","        ","","","        // Create Account:","        // enter Account ID:","        // enter Account Name:","        // Enter new Account balance:","        // // create ba object, check if the same if exists in list,","        //          if it exists, return error, continue to next loop","        //          if it is valid, insert and let teller know success","","","","        // Create Account:","        // enter Account ID:","        // enter Ac"]},{"start":{"row":196,"column":0},"end":{"row":205,"column":3},"action":"insert","lines":["=======","\t\t\tstring s2;","\t\t\tcout << \"Please enter name\" << endl;","\t\t\tcin >> s2;","\t\t//\tlist.erase(findByName(list, s2));","\t\t}","\t\t//DELETE by id","\t\tif(flag3 == 2){","\t\t\tlong int lint;","\t\t\t"]},{"start":{"row":205,"column":6},"end":{"row":205,"column":7},"action":"remove","lines":["n"]},{"start":{"row":205,"column":8},"end":{"row":207,"column":16},"action":"remove","lines":["Name:","        // Enter new Account balance:","        // // cr"]},{"start":{"row":205,"column":8},"end":{"row":205,"column":14},"action":"insert","lines":["<< \"Pl"]},{"start":{"row":205,"column":16},"end":{"row":205,"column":17},"action":"remove","lines":["t"]},{"start":{"row":205,"column":16},"end":{"row":205,"column":17},"action":"insert","lines":["s"]},{"start":{"row":205,"column":19},"end":{"row":222,"column":10},"action":"remove","lines":["ba object, check if the same if exists in list,","        //          if it exists, return error, continue to next loop","        //          if it is valid, insert and let teller know success","","","        // Find a customer:","        // \"would you like to seach by account id or name?","        // 1 - ID, 2 - name","        //","        // ID: ","        //      have user enter id. Give it and the list to jessies ","        //      find by id function.","        //       ","        //      next prompt user if he would like to withdraw, deposit","        //      or return.","        //","        // name: Same thing as above but use jessies find by name function","        //"]},{"start":{"row":205,"column":19},"end":{"row":212,"column":1},"action":"insert","lines":["enter id\" << endl;","\t\t\tcin >> lint;","\t\t//\tlist.erase(findByAcct(lint,list);",">>>>>>> refs/remotes/origin/master","\t\t}","\t\telse{}","\t}","\t"]}],[{"start":{"row":181,"column":14},"end":{"row":181,"column":15},"action":"remove","lines":["\t"],"id":2204},{"start":{"row":181,"column":14},"end":{"row":182,"column":0},"action":"insert","lines":["",""]},{"start":{"row":182,"column":0},"end":{"row":182,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":171,"column":0},"end":{"row":171,"column":12},"action":"remove","lines":["<<<<<<< HEAD"],"id":2207}],[{"start":{"row":197,"column":0},"end":{"row":197,"column":7},"action":"remove","lines":["======="],"id":2208}],[{"start":{"row":209,"column":0},"end":{"row":209,"column":34},"action":"remove","lines":[">>>>>>> refs/remotes/origin/master"],"id":2209}],[{"start":{"row":198,"column":0},"end":{"row":201,"column":38},"action":"remove","lines":["\t\t\tstring s2;","\t\t\tcout << \"Please enter name\" << endl;","\t\t\tcin >> s2;","\t\t//\tlist.erase(findByName(list, s2));"],"id":2210}],[{"start":{"row":197,"column":0},"end":{"row":198,"column":0},"action":"remove","lines":["",""],"id":2211}],[{"start":{"row":196,"column":36},"end":{"row":197,"column":0},"action":"remove","lines":["",""],"id":2212}],[{"start":{"row":198,"column":0},"end":{"row":205,"column":3},"action":"remove","lines":["\t\t//DELETE by id","\t\tif(flag3 == 2){","\t\t\tlong int lint;","\t\t\tcout << \"Please enter id\" << endl;","\t\t\tcin >> lint;","\t\t//\tlist.erase(findByAcct(lint,list);","","\t\t}"],"id":2213}],[{"start":{"row":77,"column":42},"end":{"row":77,"column":64},"action":"remove","lines":["\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n"],"id":2214}],[{"start":{"row":148,"column":5},"end":{"row":148,"column":8},"action":"insert","lines":["if("],"id":2215,"ignore":true},{"start":{"row":148,"column":12},"end":{"row":148,"column":17},"action":"remove","lines":["(i1);"]},{"start":{"row":148,"column":12},"end":{"row":148,"column":30},"action":"insert","lines":["ByAcct(i1,list)){ "]},{"start":{"row":149,"column":0},"end":{"row":150,"column":0},"action":"insert","lines":["\t\t\t",""]},{"start":{"row":151,"column":0},"end":{"row":152,"column":0},"action":"remove","lines":["\t\t\t//if(){",""]},{"start":{"row":152,"column":0},"end":{"row":153,"column":0},"action":"insert","lines":["\t\t\t\t//cout << findByAcct(i1,list)->data;",""]},{"start":{"row":153,"column":78},"end":{"row":153,"column":96},"action":"insert","lines":[", or no action(0)?"]},{"start":{"row":156,"column":19},"end":{"row":158,"column":19},"action":"remove","lines":["}","\t\t\t\t//Withdraw","\t\t\t\tif(flag5 == 2){"]},{"start":{"row":156,"column":19},"end":{"row":162,"column":4},"action":"insert","lines":["","\t\t\t\t\t//findByAcct(i1,list)->data.deposit(i1);","\t\t\t\t}","\t\t\t\t//Withdraw","\t\t\t\tif(flag5 == 2){","\t\t\t\t\t//findByAcct(i1,list)->data.withdraw(i1);","\t\t\t\t"]},{"start":{"row":203,"column":0},"end":{"row":204,"column":8},"action":"remove","lines":["","\t\telse{}"]},{"start":{"row":203,"column":0},"end":{"row":207,"column":48},"action":"insert","lines":["<<<<<<< HEAD","","\t\telse{}","=======",">>>>>>> 44e90390f025baa7bdc3a59165e6fdaba114fca9"]}],[{"start":{"row":206,"column":0},"end":{"row":207,"column":48},"action":"remove","lines":["=======",">>>>>>> 44e90390f025baa7bdc3a59165e6fdaba114fca9"],"id":2216}],[{"start":{"row":203,"column":0},"end":{"row":203,"column":12},"action":"remove","lines":["<<<<<<< HEAD"],"id":2217}],[{"start":{"row":187,"column":12},"end":{"row":187,"column":36},"action":"insert","lines":["list.printAll(); //debug"],"id":2218}],[{"start":{"row":18,"column":62},"end":{"row":18,"column":63},"action":"remove","lines":["a"],"id":2219}],[{"start":{"row":18,"column":62},"end":{"row":18,"column":63},"action":"remove","lines":["t"],"id":2220}],[{"start":{"row":18,"column":61},"end":{"row":18,"column":62},"action":"remove","lines":["o"],"id":2221}],[{"start":{"row":18,"column":60},"end":{"row":18,"column":61},"action":"remove","lines":["l"],"id":2222}],[{"start":{"row":18,"column":59},"end":{"row":18,"column":60},"action":"remove","lines":["f"],"id":2223}],[{"start":{"row":18,"column":59},"end":{"row":18,"column":60},"action":"insert","lines":["l"],"id":2224}],[{"start":{"row":18,"column":60},"end":{"row":18,"column":61},"action":"insert","lines":["o"],"id":2225}],[{"start":{"row":18,"column":61},"end":{"row":18,"column":62},"action":"insert","lines":["n"],"id":2226}],[{"start":{"row":18,"column":62},"end":{"row":18,"column":63},"action":"insert","lines":["g"],"id":2227}],[{"start":{"row":18,"column":63},"end":{"row":18,"column":64},"action":"insert","lines":[" "],"id":2228}],[{"start":{"row":18,"column":64},"end":{"row":18,"column":65},"action":"insert","lines":["i"],"id":2229}],[{"start":{"row":18,"column":65},"end":{"row":18,"column":66},"action":"insert","lines":["n"],"id":2230}],[{"start":{"row":18,"column":66},"end":{"row":18,"column":67},"action":"insert","lines":["t"],"id":2231}],[{"start":{"row":192,"column":13},"end":{"row":192,"column":14},"action":"remove","lines":["t"],"id":2232}],[{"start":{"row":192,"column":12},"end":{"row":192,"column":13},"action":"remove","lines":["a"],"id":2233}],[{"start":{"row":192,"column":11},"end":{"row":192,"column":12},"action":"remove","lines":["o"],"id":2234}],[{"start":{"row":192,"column":10},"end":{"row":192,"column":11},"action":"remove","lines":["l"],"id":2235}],[{"start":{"row":192,"column":9},"end":{"row":192,"column":10},"action":"remove","lines":["f"],"id":2236}],[{"start":{"row":192,"column":9},"end":{"row":192,"column":10},"action":"insert","lines":["l"],"id":2237}],[{"start":{"row":192,"column":10},"end":{"row":192,"column":11},"action":"insert","lines":["o"],"id":2238}],[{"start":{"row":192,"column":11},"end":{"row":192,"column":12},"action":"insert","lines":["n"],"id":2239}],[{"start":{"row":192,"column":12},"end":{"row":192,"column":13},"action":"insert","lines":["g"],"id":2240}],[{"start":{"row":192,"column":13},"end":{"row":192,"column":14},"action":"insert","lines":[" "],"id":2241}],[{"start":{"row":192,"column":14},"end":{"row":192,"column":15},"action":"insert","lines":["i"],"id":2242}],[{"start":{"row":192,"column":15},"end":{"row":192,"column":16},"action":"insert","lines":["n"],"id":2243}],[{"start":{"row":192,"column":16},"end":{"row":192,"column":17},"action":"insert","lines":["t"],"id":2244}],[{"start":{"row":149,"column":3},"end":{"row":150,"column":0},"action":"insert","lines":["",""],"id":2245},{"start":{"row":150,"column":0},"end":{"row":150,"column":3},"action":"insert","lines":["\t\t\t"]}],[{"start":{"row":150,"column":3},"end":{"row":151,"column":0},"action":"insert","lines":["",""],"id":2246},{"start":{"row":151,"column":0},"end":{"row":151,"column":3},"action":"insert","lines":["\t\t\t"]}],[{"start":{"row":18,"column":59},"end":{"row":18,"column":60},"action":"insert","lines":["f"],"id":2247,"ignore":true},{"start":{"row":18,"column":62},"end":{"row":18,"column":67},"action":"remove","lines":["ng in"]},{"start":{"row":18,"column":62},"end":{"row":18,"column":63},"action":"insert","lines":["a"]},{"start":{"row":150,"column":0},"end":{"row":152,"column":0},"action":"remove","lines":["\t\t\t","\t\t\t",""]},{"start":{"row":192,"column":9},"end":{"row":192,"column":10},"action":"insert","lines":["f"]},{"start":{"row":192,"column":12},"end":{"row":192,"column":17},"action":"remove","lines":["ng in"]},{"start":{"row":192,"column":12},"end":{"row":192,"column":13},"action":"insert","lines":["a"]}],[{"start":{"row":18,"column":32},"end":{"row":18,"column":63},"action":"remove","lines":["SNode<BasicAccount>* data, floa"],"id":2248,"ignore":true},{"start":{"row":18,"column":32},"end":{"row":18,"column":39},"action":"insert","lines":["long in"]},{"start":{"row":18,"column":72},"end":{"row":18,"column":75},"action":"remove","lines":["* l"]},{"start":{"row":18,"column":72},"end":{"row":18,"column":75},"action":"insert","lines":["& L"]},{"start":{"row":19,"column":29},"end":{"row":19,"column":32},"action":"remove","lines":["l->"]},{"start":{"row":19,"column":29},"end":{"row":19,"column":31},"action":"insert","lines":["L."]},{"start":{"row":20,"column":11},"end":{"row":20,"column":12},"action":"insert","lines":[" "]},{"start":{"row":22,"column":5},"end":{"row":23,"column":3},"action":"remove","lines":["","   "]},{"start":{"row":23,"column":4},"end":{"row":24,"column":9},"action":"remove","lines":["cout << \"acct is : \" << acct << endl; ","    while"]},{"start":{"row":23,"column":4},"end":{"row":24,"column":7},"action":"insert","lines":["while(p){","\t    if"]},{"start":{"row":24,"column":32},"end":{"row":24,"column":33},"action":"remove","lines":["!"]},{"start":{"row":24,"column":32},"end":{"row":24,"column":33},"action":"insert","lines":["="]},{"start":{"row":25,"column":0},"end":{"row":27,"column":0},"action":"insert","lines":["\t    \treturn p;","\t    }",""]},{"start":{"row":30,"column":0},"end":{"row":31,"column":0},"action":"remove","lines":["",""]},{"start":{"row":32,"column":32},"end":{"row":32,"column":59},"action":"remove","lines":["SNode<BasicAccount>* data, "]},{"start":{"row":32,"column":68},"end":{"row":32,"column":71},"action":"remove","lines":["* l"]},{"start":{"row":32,"column":68},"end":{"row":32,"column":71},"action":"insert","lines":["& L"]},{"start":{"row":33,"column":29},"end":{"row":33,"column":32},"action":"remove","lines":["l->"]},{"start":{"row":33,"column":29},"end":{"row":33,"column":31},"action":"insert","lines":["L."]},{"start":{"row":34,"column":11},"end":{"row":34,"column":12},"action":"insert","lines":[" "]},{"start":{"row":37,"column":4},"end":{"row":39,"column":9},"action":"remove","lines":["","    cout << \"name is : \" << nm << endl; ","    while"]},{"start":{"row":37,"column":4},"end":{"row":38,"column":6},"action":"insert","lines":["while(p){","    if"]},{"start":{"row":38,"column":25},"end":{"row":38,"column":26},"action":"remove","lines":["!"]},{"start":{"row":38,"column":25},"end":{"row":38,"column":26},"action":"insert","lines":["="]},{"start":{"row":39,"column":0},"end":{"row":41,"column":0},"action":"insert","lines":["    \treturn p;","    }",""]},{"start":{"row":121,"column":2},"end":{"row":121,"column":4},"action":"remove","lines":["//"]},{"start":{"row":124,"column":3},"end":{"row":124,"column":5},"action":"remove","lines":["//"]},{"start":{"row":125,"column":77},"end":{"row":125,"column":94},"action":"insert","lines":[", or no action(0)"]},{"start":{"row":131,"column":3},"end":{"row":131,"column":5},"action":"remove","lines":["//"]},{"start":{"row":136,"column":41},"end":{"row":136,"column":48},"action":"remove","lines":["deposit"]},{"start":{"row":136,"column":41},"end":{"row":136,"column":49},"action":"insert","lines":["withdraw"]},{"start":{"row":138,"column":3},"end":{"row":138,"column":5},"action":"remove","lines":["//"]},{"start":{"row":138,"column":32},"end":{"row":138,"column":39},"action":"remove","lines":["deposit"]},{"start":{"row":138,"column":32},"end":{"row":138,"column":40},"action":"insert","lines":["withdraw"]},{"start":{"row":141,"column":2},"end":{"row":141,"column":4},"action":"remove","lines":["//"]},{"start":{"row":141,"column":2},"end":{"row":144,"column":2},"action":"insert","lines":["\t}","\t\t\telse{","\t\t\tcout << \"Could not find account\" << endl;","\t\t"]},{"start":{"row":152,"column":3},"end":{"row":152,"column":5},"action":"remove","lines":["//"]},{"start":{"row":156,"column":4},"end":{"row":156,"column":6},"action":"remove","lines":["//"]},{"start":{"row":156,"column":4},"end":{"row":157,"column":4},"action":"insert","lines":["float ammount = 0;","\t\t\t\t"]},{"start":{"row":162,"column":5},"end":{"row":162,"column":7},"action":"remove","lines":["//"]},{"start":{"row":162,"column":5},"end":{"row":163,"column":5},"action":"insert","lines":["cout << \"How much would you like to deposit?\" << endl;","\t\t\t\t\t"]},{"start":{"row":163,"column":39},"end":{"row":163,"column":41},"action":"remove","lines":["i1"]},{"start":{"row":163,"column":39},"end":{"row":163,"column":46},"action":"insert","lines":["ammount"]},{"start":{"row":167,"column":5},"end":{"row":167,"column":7},"action":"remove","lines":["//"]},{"start":{"row":167,"column":5},"end":{"row":168,"column":5},"action":"insert","lines":["cout << \"How much would you like to withdraw?\" << endl;","\t\t\t\t\t"]},{"start":{"row":168,"column":40},"end":{"row":168,"column":42},"action":"remove","lines":["i1"]},{"start":{"row":168,"column":40},"end":{"row":168,"column":47},"action":"insert","lines":["ammount"]},{"start":{"row":171,"column":3},"end":{"row":173,"column":3},"action":"remove","lines":["//}","","\t\t}"]},{"start":{"row":171,"column":3},"end":{"row":179,"column":12},"action":"insert","lines":["}","\t\t\telse{","\t\t\tcout << \"Could not find accout\" << endl;","\t\t\t}","","\t\t}","\t\tcout << \"Press enter to continue\" << endl;","\t\tcin.ignore();","\t\tcin.get();"]},{"start":{"row":190,"column":30},"end":{"row":190,"column":51},"action":"remove","lines":[" (see hints above^^):"]},{"start":{"row":193,"column":0},"end":{"row":193,"column":2},"action":"remove","lines":["\t\t"]},{"start":{"row":193,"column":4},"end":{"row":194,"column":4},"action":"remove","lines":["SNode<BasicAccount>* ptr1 = list.getHead(); ","    "]},{"start":{"row":193,"column":12},"end":{"row":194,"column":2},"action":"insert","lines":["","\t\t"]},{"start":{"row":194,"column":40},"end":{"row":194,"column":46},"action":"remove","lines":["ptr1, "]},{"start":{"row":194,"column":46},"end":{"row":194,"column":47},"action":"remove","lines":["&"]},{"start":{"row":195,"column":12},"end":{"row":199,"column":3},"action":"insert","lines":["\tif(ptr == 0){","\t\t\tcout << \"Could not find account\" << endl;","\t\t}","\t\tif(ptr != 0){","\t\t\t"]},{"start":{"row":200,"column":0},"end":{"row":200,"column":12},"action":"remove","lines":["            "]},{"start":{"row":200,"column":0},"end":{"row":200,"column":3},"action":"insert","lines":["\t\t\t"]},{"start":{"row":201,"column":0},"end":{"row":204,"column":36},"action":"remove","lines":["            if (list.getHead()==NULL){","                cout << \"No More Accounts to delete! Thank you come again\\n\"; ","            } ","            list.printAll(); //debug"]},{"start":{"row":201,"column":0},"end":{"row":202,"column":2},"action":"insert","lines":["\t\t}","\t\t"]},{"start":{"row":206,"column":40},"end":{"row":206,"column":61},"action":"remove","lines":[" (see hints above^^):"]},{"start":{"row":207,"column":9},"end":{"row":207,"column":10},"action":"remove","lines":["f"]},{"start":{"row":207,"column":9},"end":{"row":207,"column":10},"action":"insert","lines":["\t"]},{"start":{"row":207,"column":12},"end":{"row":207,"column":13},"action":"remove","lines":["a"]},{"start":{"row":207,"column":12},"end":{"row":207,"column":17},"action":"insert","lines":["ng in"]},{"start":{"row":208,"column":9},"end":{"row":208,"column":10},"action":"insert","lines":["\t"]},{"start":{"row":209,"column":0},"end":{"row":209,"column":2},"action":"remove","lines":["\t\t"]},{"start":{"row":209,"column":4},"end":{"row":210,"column":4},"action":"remove","lines":["SNode<BasicAccount>* ptr1 = list.getHead(); ","    "]},{"start":{"row":209,"column":12},"end":{"row":210,"column":3},"action":"insert","lines":["","\t\t\t"]},{"start":{"row":210,"column":41},"end":{"row":210,"column":47},"action":"remove","lines":["ptr1, "]},{"start":{"row":210,"column":48},"end":{"row":210,"column":49},"action":"remove","lines":["&"]},{"start":{"row":211,"column":12},"end":{"row":216,"column":3},"action":"insert","lines":["","\t\t\tif(ptr == 0){","\t\t\t\tcout << \"Could not find account\" << endl;","\t\t\t}","\t\t\tif(ptr != 0){","\t\t\t"]},{"start":{"row":217,"column":12},"end":{"row":217,"column":14},"action":"insert","lines":["\t\t"]},{"start":{"row":218,"column":0},"end":{"row":226,"column":0},"action":"remove","lines":["            if (list.getHead()==NULL){","                cout << \"No More Accounts to delete! Thank you come again\\n\"; ","            } ","            list.printAll(); //debug","\t\t}","","","\t\telse{}",""]},{"start":{"row":218,"column":0},"end":{"row":223,"column":11},"action":"insert","lines":["\t\t\t}","\t\t}","","\tcout << \"Press enter to continue\" << endl;","\tcin.ignore();","\tcin.get();"]}]]},"ace":{"folds":[],"scrolltop":147,"scrollleft":0,"selection":{"start":{"row":120,"column":15},"end":{"row":120,"column":15},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":97,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1488118928248,"hash":"08f8ff3a1db7ee6603b2b470ef025b49d4537423"}