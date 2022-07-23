#include "Stack.h"
#include<iostream>
using namespace std;
template<class T>
Stack<T>::Stack()
{
   top=NULL;
}
template<class T>
bool Stack<T>::isEmpty()
{
    return top==NULL;
}
template<class T>
T Stack<T>::Top()
{
    if(isEmpty())
        throw EmptyStack();
    else
        return top->data;
}
template<class T>
bool Stack<T>::isFull()
{
    Node<T> *temp;
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
void Stack<T>::Push(T item)
{
    if(isFull())
        throw FullStack();
    else{
        Node<T>* newNode=new Node<T>;
        newNode->data=item;
        newNode->next=top;
        top=newNode;
    }
}
template<class T>
void Stack<T>::Pop()
{
    if(isEmpty())
        throw EmptyStack();
    else{
        Node<T>*temp;
        temp=top;
        top=top->next;
        delete temp;
    }
}

template<class T>
Stack<T>::~Stack()
{
Node<T> *temp;
   while(top!=NULL)
   {
       temp=top;
       top=top->next;
       delete temp;

   }

}
