#include "Queue.h"
#include<iostream>
using namespace std;
template<class T>
Queue<T>::Queue()
{
    head=NULL;
    tail=NULL;

}

template<class T>
bool Queue<T>::isEmpty()
{
    return head==NULL && tail==NULL;
}
template<class T>
bool Queue<T>::isFull()
{
    Node<T>* temp;
    try{
        temp=new Node<T>;
        delete temp;
        return false;
    }
    catch(std::bad_alloc & exception)
    {
        return true;
    }

}
template<class T>
void Queue<T>::Enqueue(T item)
{
    if(isFull())
        throw FullQueue();
    Node<T> *newNode=new Node<T>;
    newNode->data=item;
    newNode->next=NULL;
    if(tail==NULL)
        head=newNode;
    else{
        tail->next=newNode;
        tail=newNode;
    }

  }
template<class T>
void Queue<T>::Dequeue(T &item)
{
    if(isEmpty())
        throw EmptyQueue();
    else{
        Node<T>* temp;
        temp=head;
        item=head->data;
        head=head->next;
        if(head==NULL)
            tail=NULL;
        delete temp;
    }

}
template<class T>
void Queue<T>::MakeEmpty()
{
    Node<T> *temp;
    while(head!=NULL)
    {
        temp=head;
        head=head->next;
        delete temp;
    }
    tail=NULL;
}
template<class T>
Queue<T>::~Queue()
{
    MakeEmpty();

}
