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
The user can also delete an account.
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


## BasicAccount.cpp (Matthew, Jessie, Paulo)

This contains the bank account class that was used for our previous lab.

