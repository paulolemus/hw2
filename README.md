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

This file is responsible for interfacing the list functions with the bank account functions. 
We tried our best to follow the template model that Paulo mentioned earlier. So in this file the "T" was 
our "BankAccount" type. This added a level of complexity to mapping what each varible type was and 
where it came from. Jessie primarily worked on the functions and Matt worked on the logic flow
for the driver. 

Jessie -
The most challenging part for this file for me was writing functions that would 
agree with the format of the singlylinked.h and BankAccount files. Since this was a group
project and some of us were working remotely, we wanted to avoid altering those files as much as 
possible. So there were several times where it became very difficult to manipulate a function solely
based on the design of a seperate functions' return or input. 

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
This homework I learned how to implement the templates that we discussed in lab to
our bank account and list lab. I also learned how difficult, yet crucial it is to be able to work with a 
provided code that you shouldn't or sometimes can't change.  
I also learned to appreciate lists through this homework. They are much easier to manipulate 
than an array or vector. 

Matt:

## Contributions:
Paulo:
For this assignment, my main contribution was the linked list
class. Beside writing singlylinked.h, I also assisted with the
logic for the driver bankwithlist.cpp by writing out the Suedocode 
for some of the functions used, as well as a "map" of the logic
for the main while loop. I also contributed by cleaning up code.

Jessie: 
I'll start off the bat with honestly saying that as far as the working lines of code are 
concerned, I probably have the least amount of the three of us that was my original design. 
It was very difficult for me to grasp the templates at first. I finally reached out to the guys and 
told them how stuck I was and they helped me a lot. After that it was down hill and I was able to 
create some functions that benefitted our group assignment.
The guys helped me a lot with conceptualizing how the files would work together and with the 
driver. I also compiled our written work and photos and prepared the files for the final submission. 

Matt:

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
Can we practice more templates in class? It was cool to go over the examples from the slides but it's 
still a little hazy. 

Matt:
