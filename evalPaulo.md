## HW2 Evaluation - Paulo Lemus - Team Sandwich

## 1) What I learned from this homework:
From this homework, I learned how to create my own generic data structure
and how to apply it practically. I gained experience making use of 
the linked list data structure and gained insight on when it should
be used.
For this BankAccount program, linked list is a far better choice
of data structure over an array of BasicAccounts.
I also am learning how to write code on paper. That may sound silly,
but I've found from this assignment that getting better at writing on
paper speeds up the time it takes to write and code drastically.


## 2) My Contributions
For the original assignment, my main contribution was the linked list
class. Beside writing singlylinked.h, I also assisted with the
logic for the driver bankwithlist.cpp by writing out the Suedocode 
for some of the functions used, as well as a "map" of the logic
for the main while loop. I also contributed by cleaning up code.

For this resubmission, I rewrote the bankwithlist.cpp file so that 
it doesn't crash on user input, the user can print all the bank accounts,
and so the main can easily be read as the code has been broken up in to
different functions.

## singlylinked.h
For this hw assignment, I wanted to revamp my singlylist.h/cpp
file so that can be generic. I recently learned about using templates, 
and thought there would be no better time to use them than an assignment
where we use our own data structure. I rewrote the singlylinked code from
Lab6 so that it can be used with any kind of data type. 

This file contains code for a singly linked list, and its node.
The singly linked list is used in bankwithlist.cpp to create
a linked list of BasicAccounts sorted by ID number.


## 3) Questions:
Is it standard to write a "search" function inside the linked list
class, or to write it specifically for what you want to search?
I could not think of a way to write a Linked list class search that
lets the user search for parameters of the data type given to the SNode.
For example, if the user make a list of primitives, it would be very easy
to make a search function for those. However, what if the user created a
list of BankAccount objects, which have their own fields? How would a user
search by a parameter IN the bankaccount, without writing a function
separately for each parameter?


## 4) Comments:
This project was really fun because it forced me to use my own data structure.
I hope that in the future we can have projects were we make use of our own
structures to solve problems. I would love to implement queues, priority queues, 
and balanced trees if possible.
I feel that the description for what you want could be a little clearer. You cleared
things up in class on Wednesday, but if we had better descriptions in the homework PDF,
I feel that we could be more productive.
