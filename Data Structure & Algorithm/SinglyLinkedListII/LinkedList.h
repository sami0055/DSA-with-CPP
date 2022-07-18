#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template<class T>
struct Node{
    T data;
    Node* next;

};
template<class T>
class LinkedList
{
    public:
        LinkedList();
         ~LinkedList();
         void addFront(T item);
         void addRear(T item);
         void addItem(T item,T nextItem);
         bool findItem(T item);
         void deleteFront();
         void deleteRear();
         void deleteItem(T item);
         void Print();
      private:
          Node<T> *head;
          Node<T> *tail;

};

#endif // LINKEDLIST_H
