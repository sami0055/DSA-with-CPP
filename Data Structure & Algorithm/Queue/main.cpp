#include <iostream>
#include<stack>
#include "Queue.cpp"
using namespace std;
void PrintQue(Queue<int> q)
{
    Queue<int> temp;
    stack<int> s;
    while(!q.isEmpty())
    {
        cout<<q.Front()<<endl;
        temp.Enque(q.Front());
        q.Deque();
    }
    while(!temp.isEmpty())
    {
        q.Enque(temp.Front());
        s.push(temp.Front());
        temp.Deque();
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

}
void PrintBinary(int n)
{
    Queue<string> q;
    string s1,s2;
    string temp="1";
    q.Enque(temp);
    for(int i=0; i<n; i++)
    {
        temp=q.Front();
        cout<<temp<<" ";
        q.Deque();
        s1=temp+'0';
        q.Enque(s1);
        s2=temp+'1';
        q.Enque(s2);



    }
}
int main()
{
  Queue<int> q1;
  for(int i=0; i<5; i++)
  {
      int n;
      cin>>n;
      q1.Enque(n);
  }
  PrintQue(q1);
  return 0;

}
