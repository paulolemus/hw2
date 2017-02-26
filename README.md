# EE 205 Programming Assignment 2 - Lists

Team   : Sandwich
Members: Paulo Lemus, Matthew Yamamoto, Jessie Grazziotin
Date   : 2/24/2017

# what our program does:

the bankwithlist executable begins with a simple interface which
allows the user to add, search for, or delete a BasicAccount.
The user cannot add a bankaccount that has the same ID as an existing one.
The user can search by name OR ID. If an account is found, the user is
prompted if he/she would like to withdraw or deposit.
The user can also delete an account when given a name or ID.
The program expects the user to enter valid entries to each input field.
TLDR: It works pretty well.

# Files:

bankwithlist.cpp
BasicAccount.cpp
BasicAccount.h
singlylinked.cpp
singlylinked.h
makefile
README.md

# To make:

type: `make`
This should make the bankwithlist.cpp into a bankwithlist exec.

# Description of the files:

## singlylinked.h (Paulo)
Paulo - For this hw assignment, I wanted to revamp my singlylist.h/cpp
file so that can be generic. I recently learned about using templates, 
and thought there would be no better time to use them than an assignment
where we use our own data structure. I rewrote the singlylinked code from
Lab6 so that it can be used with any kind of data type. 

This file contains code for a singly linked list, and its node.
The singly linked list is used in bankwithlist.cpp to create
a linked list of BasicAccounts sorted by ID number.

## bankwithlist.cpp (Matthew, Jessie)
Matthew - This file is our driver that will utilize the 
classes found in singlylinked.h. I wrote the main loop that 
will continue to ask the user to either add, find, or delete
accounts until given a 0 input in which the program will 
terminate. This file contains mostly input prompts and uses 
if statements to redirect the user depending on those inputs.
The functions and classes are called and tested using this driver.

## BasicAccount.cpp (Matthew, Jessie, Paulo)

This contains the bank account class that was used for our previous lab.

# WRITEUP

## What we learned from this homework:
Paulo:
From this homework, I learned how to create my own generic data structure
and how to apply it practically. I gained experience making use of 
the linked list data structure and gained insight on when it should
be used.
For this BankAccount program, linked list is a far better choice
of data structure over an array of BasicAccounts.
I also am learning how to write code on paper. That may sound silly,
but I've found from this assignment that getting better at writing on
paper speeds up the time it takes to write and code drastically.

Jessie:

Matt:
From this homework assignment I learned about generic data structure 
and how useful it can be when modifying code to do many things. I 
also learned about Linked lists and how to write functions for them 
that will search and modify them. I also learned about git and the
workflow assosciated with working in a group. Although it doesn't
necessarily pertain to the assignment, it was good for me to learn 
how to code with a team.
## Contributions:
Paulo:
For this assignment, my main contribution was the linked list
class. Beside writing singlylinked.h, I also assisted with the
logic for the driver bankwithlist.cpp by writing out the Suedocode 
for some of the functions used, as well as a "map" of the logic
for the main while loop. I also contributed by cleaning up code.

Jessie:
Matt:
I contributed by writing the main loop in the bankwithlist.cpp. I
also helped troubleshoot the functions in bankwithlist.cpp that
are unique to this homework assignment instead of being generic
like the list. 

## Questions:
Paulo:
Is it standard to write a "search" function inside the linked list
class, or to write it specifically for what you want to search?
I could not think of a way to write a Linked list class search that
lets the user search for parameters of the data type given to the SNode.
For example, if the user make a list of primitives, it would be very easy
to make a search function for those. However, what if the user created a
list of BankAccount objects, which have their own fields? How would a user
search by a parameter IN the bankaccount, without writing a function
separately for each parameter?

Jessie:
Matt:
Is there advantages to using a doubly linked list over a singly linked
list? I imagine having a search function for a singly linked list to 
take a lot of time to find the element if the list is long and you
have to start from the head and search every element. I read
something about fibonacci numbers and optimization, is that used in
lists? The advantage of doubly linked is that you can start anywhere
and move anywhere.
