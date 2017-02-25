/* File: singlylinked.h
 * Name: Paulo Lemus
 * Date: 2/19/2017
 */

#ifndef EE_SINGLYLINKED_H_
#define EE_SINGLYLINKED_H_

/* This file contains code for a singly linked list.
*/

/////////////////////////////////////////////////////
///             CLASS DECLARATIONS                ///
/////////////////////////////////////////////////////

template <typename T>
struct SNode{
    T         data;
    SNode<T>* next;

    SNode(T& data, SNode<T>* next = NULL);
    //friend std::ostream& operator<<(std::ostream& output, const T& data);
};

template <typename T>
class SLinkedList{
    SNode<T>* head;
    SNode<T>* tail;

    public:
    SLinkedList();
    SNode<T>* insert(SNode<T>& acc, SNode<T>* p); // insert acc before p, return acc*
    SNode<T>* add(SNode<T>* p, SNode<T>& acc);    // add acc after p, return n pointer
    SNode<T>* erase(SNode<T>& acc);               // erase node p
    SNode<T>* find(SNode<T>* b, T& acc);          // from b to null, return node with s
    SNode<T>* find(T& acc);                       // seach whole list for s
    SNode<T>* advance(SNode<T>* p, int n);
    void      append(SNode<T>& acc);              // add a to end of list
    void      printAll(SNode<T>* acc);

    SNode<T>* getTail();
    SNode<T>* setTail(SNode<T>* p);
    SNode<T>* getHead();
    SNode<T>* setHead(SNode<T>* p);
};

/////////////////////////////////////////////////////
///              FUNC DEFINITIONS                 ///
/////////////////////////////////////////////////////

// Constructor
template <typename T>
SNode<T>::SNode(T& data, SNode<T>* next):data(data), next(next){}

// Constructor
template <typename T>
SLinkedList<T>::SLinkedList(){
    head = NULL;
    tail = NULL;
}
/* Insert:
 * This function first checks two cases, nullptr and head.
 * If neither, then it iterates through list until it finds
 * p, or the list ends.
 * If it finds p, it inserts a new node before it. Otherwise,
 * function returns NULL.
 */
template <typename T>
SNode<T>* SLinkedList<T>::insert(SNode<T>& acc, SNode<T>* p){

    SNode<T>* previous = NULL;
    SNode<T>* current  = head;

    if(p == NULL) return NULL;
    if(p == head){
        SNode<T>* node = new SNode<T>(acc);
        node->next = head;
        head = node;
        return node;
    }
    while(current){
        if(current == p) break;
        previous = current;
        current = current->next;
    }
    if(current == NULL) return NULL;
    SNode<T>* node = new SNode<T>(acc);
    previous->next = node;
    node->next = current;
    return node;
}

#endif
