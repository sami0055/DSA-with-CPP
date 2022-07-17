#include "stacktype.h"

template<class T>
stacktype<T>::stacktype()
{
  top=-1;
}
template<class T>
bool stacktype<T>::isFull()
{

    return top==MAX-1;
}
template<class T>
bool stacktype<T>::isEmpty()
{
    return top==-1;

}
template<class T>
void stacktype<T>::Push(T item)
{
    if(isFull())
        throw FullStack();
    top++;
    data[top]=item;
}
template<class T>
void stacktype<T>::Pop()
{
    if(isEmpty())
        throw EmptyStack();
    top--;
}
template<class T>
T stacktype<T>::Top()
{
    if(isEmpty())
    throw EmptyStack();

    return data[top];
}
