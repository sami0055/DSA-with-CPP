#include <iostream>
#include "Stack.cpp";
using namespace std;
template<class T>
void PrintStack(Stack<T> s)
{
    Stack<T> t;

    while(!s.isEmpty())
    {
        cout<<s.Top()<<" ";

        t.Push(s.Top());
        s.Pop();
    }
    while(!t.isEmpty())
    {
        s.Push(t.Top());
        t.Pop();
    }



}
int main()
{

   Stack<int> t;
   t.Push(12);
   t.Push(34);
   t.Push(45);
   PrintStack(t);


}
