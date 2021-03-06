## HW2 Evaluation - Matthew Yamamoto - Team Sandwich


## 1) What I learned from this homework:
From this homework assignment I learned about generic data structure 
and how useful it can be when modifying code to do many things. I 
also learned about Linked lists and how to write functions for them 
that will search and modify them. I also learned about git and the
workflow assosciated with working in a group. Although it doesn't
necessarily pertain to the assignment, it was good for me to learn 
how to code with a team.


## 2) My Contributions
I contributed by writing the main loop in the bankwithlist.cpp. I
also helped troubleshoot the functions in bankwithlist.cpp that
are unique to this homework assignment instead of being generic
like the list. (see further files descriptions below)

## bankwithlist.cpp (Other Contributors: Jessie - functions, Paulo - template setup)
This file is our driver that will utilize the 
classes found in singlylinked.h. I wrote the main loop that 
will continue to ask the user to either add, find, or delete
accounts until given a 0 input in which the program will 
terminate. This file contains mostly input prompts and uses 
if statements to redirect the user depending on those inputs.
The functions and classes are called and tested using this driver.

## BasicAccount.cpp & BasicAccount.h (Other Contributors: Matthew, Jessie, Paulo)

This contains the bank account class that was used for our previous lab.


## 3) Questions:
Are there advantages to using a doubly linked list over a singly linked
list? I imagine having a search function for a singly linked list to 
take a lot of time to find the element if the list is long and you
have to start from the head and search every element. I read
something about fibonacci numbers and optimization, is that used in
lists? The advantage of doubly linked is that you can start anywhere
and move anywhere.


## 4) Comments:
This assignment was challenging because of the multiple layers of encapsulation.
We had a linked list class that contained a slink that contained a basicaccount
struct that contained data like name, id, and balance. It was confusing to
think of the algorithms needed to get to the data that we were looking for.
