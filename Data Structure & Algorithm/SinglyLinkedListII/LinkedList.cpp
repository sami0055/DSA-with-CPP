#include "LinkedList.h"
#include<iostream>
using namespace std;
template<class T>
LinkedList<T>::LinkedList()
{
   head=NULL;
}

template<class T>
LinkedList<T>::~LinkedList()
{
   Node<T> *temp=head;
   while(temp!=NULL){

    head=head->next;
    delete temp;
   temp=head;
   }
}
template<class T>
void LinkedList<T>::addFront(T item)
{
    Node<T> *newNode=new Node<T>;
    newNode->data=item;
    if(head==NULL)
    {
        newNode->next=NULL;
        head=newNode;
        tail=newNode;
    }else{

        newNode->next=head;
        head=newNode;

    }
}
template<class T>
void LinkedList<T>::addRear(T item)
{
  Node<T> *newNode=new Node<T>;
  newNode->data=item;
  newNode->next=NULL;
  if(head==NULL){
    head=newNode;
    tail=newNode;
  }
  else{
    tail->next=newNode;
    tail=tail->next;
  }
}
template<class T>
void LinkedList<T>::addItem(T item,T nextItem){

    Node<T> *newNode=new Node<T>;
    newNode->data=nextItem;
    Node<T> *temp=head;

    while( temp!=NULL && temp->data!=item)
    {
        temp=temp->next;
    }

    if(temp!=NULL)
    {
    newNode->next=temp->next;
    temp->next=newNode;
    }

}
template<class T>
bool LinkedList<T>::findItem(T item)
{
    Node<T> *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==item)
            return true;
        temp=temp->next;
    }
    return true;
}
template<class T>
void LinkedList<T>::deleteFront()
{
    Node<T> *temp;
    if(head==NULL)
        return;
    else if(head->next==NULL){
        temp=head;
        head=NULL;
        delete temp;
    }
    else{
        temp=head;
        head=head->next;
        delete temp;
    }
}
template<class T>
void LinkedList<T>::deleteRear()
{
    Node<T> *temp;
    if(head==NULL)
    {
        return;
    }
    else if(head->next==NULL)
    {
        temp=head;
        head=NULL;
        delete temp;
    }
    else{
            Node<T> *t;
        temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        t=temp->next;
    temp->next=NULL;
    delete t;
    }
}
template<class T>
void LinkedList<T>::deleteItem(T item)
{
    Node<T> *temp=head;
    if(head==NULL)
        return;

     if(head->data==item)
     {
         temp=head;
         head=head->next;
         delete temp;
     }
    while( temp!=NULL && temp->next->data!=item)
    {
        temp=temp->next;
    }
    if(temp!=NULL)
    {
        Node<T> *t;
        t=temp->next;
        temp->next=temp->next->next;
        delete t;

    }
}

template<class T>
void LinkedList<T>::Print()
{
    Node<T>* pos = head;
    while (pos!=NULL) {
        cout << pos->data << "   ";
        pos = pos->next;
    }
    cout << endl;
}
