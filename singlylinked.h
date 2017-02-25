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

    SNode(const T& data, SNode<T>* next = NULL);
    //friend std::ostream& operator<<(std::ostream& output, const T& data);
};

template <typename T>
class SLinkedList{
    SNode<T>* head;
    SNode<T>* tail;

    public:
    SLinkedList();
    SNode<T>* insert(const T& data, SNode<T>* p); // insert acc before p, return acc*
    SNode<T>* add(const T& data, SNode<T>* p);    // add acc after p, return n pointer
    SNode<T>* erase(SNode<T>* p);                 // erase using given ptr
    SNode<T>* erase(T& data);                     // erase by data
    SNode<T>* find(SNode<T>* b, T& data);         // from b to null, return node with s
    SNode<T>* find(T& data);                      // seach whole list for s
    SNode<T>* advance(SNode<T>* p, int n);
    SNode<T>* append(const T& data);              // add a to end of list
    void      printAll(SNode<T>* p);
    void      printAll();

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
SNode<T>::SNode(const T& data, SNode<T>* next):data(data), next(next){}

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
SNode<T>* SLinkedList<T>::insert(const T& data, SNode<T>* p){
    SNode<T>* previous = NULL;
    SNode<T>* current  = this->head;

    if(p == this->head){
        SNode<T>* node = new SNode<T>(data);
        node->next = this->head;
        this->head = node;
        return node;
    }
    while(current){
        if(current == p) break;
        previous = current;
        current = current->next;
    }
    if(current == NULL) return NULL;
    SNode<T>* node = new SNode<T>(data);
    previous->next = node;
    node->next = current;
    return node;
}

/* Add:
 * Add new node with data after p, return pointer to node
 * First, guard against null ptr. Otherwise,
 * Check the next node. If it is null, p->next = new node.
 * Otherwise, add the new node between p and after.
 */
template <typename T>
SNode<T>* SLinkedList<T>::add(const T& data, SNode<T>* p){
    if(!p) return NULL;
    SNode<T>* after = p->next;

    SNode<T>* node = new SNode<T>(data);
    if(after == NULL){
        p->next = node;
        return node;
    }
    p->next = node;
    node->next = after;
    return node;
}

/* Append:
 * This adds a new node to the end of the list
 */
SNode<T>* append(const T& data){

}

/* PrintAll:
 * Simply prints the data from each node,
 * starting from given or head.
 */
template <typename T>
void SLinkedList<T>::printAll(SNode<T>* p){
    if(p == NULL) std::cout << "Nothing to print!" << std::endl;
    while(p != NULL){
        std::cout << p->data << std::endl;
        p = p->next;
    }
}
template <typename T>
void SLinkedList<T>::printAll(){
    SNode<T>* p = this->head;
    if(p == NULL) std::cout << "Nothing to print!" << std::endl;
    while(p != NULL){
        std::cout << p->data << std::endl;
        p = p->next;
    }
}
// Getters / Setters //
template <typename T>
SNode<T>* SLinkedList<T>::getTail(){return this->tail;}
template <typename T>
SNode<T>* SLinkedList<T>::setTail(SNode<T>* p){this->tail = p; return this->tail;}
template <typename T>
SNode<T>* SLinkedList<T>::getHead(){ return this->head;}
template <typename T>
SNode<T>* SLinkedList<T>::setHead(SNode<T>* p){this->head = p; return this->head;}
#endif
