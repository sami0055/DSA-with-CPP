#include <iostream>
#include "Queue.cpp"
#include "stacktype.cpp"
using namespace std;

void PrintQue(Queue<int> q)
{
    Queue<int> temp;
    stacktype<int> t;
    while(!q.isEmpty())
    {
        cout<<q.Front()<<" ";
        temp.Enque(q.Front());
        q.Deque();
    }
    while(!temp.isEmpty())
    {
        q.Enque(temp.Front());
        t.Push(temp.Front());
        temp.Deque();
    }
    cout<<endl;
    while(!t.isEmpty())
    {
        cout<<t.Top()<<" ";
        t.Pop();
    }

}
void MakePalindrome(int n)
{
    Queue<int> q;
    for(int i=1; i<=n; i++)
    {
        q.Enque(i);
    }
    stacktype<int> st;
    Queue<int> temp;
    while(!q.isEmpty())
    {
        temp.Enque(q.Front());
        q.Deque();
    }
    while(!temp.isEmpty())
    {
        q.Enque(temp.Front());
        st.Push(temp.Front());
        temp.Deque();
    }
    while(!q.isEmpty())
    {
        cout<<q.Front();
        q.Deque();
    }
    while(!st.isEmpty()){
        cout<<st.Top();
        st.Pop();
    }
}

void WeightMeter(Queue<int> q,int Wl)
{
    int sum=0,Count=0;
    Queue<int> temp;
    while(!q.isEmpty())
    {
        sum=sum+q.Front();

        temp.Enque(q.Front());
        q.Deque();
        if(sum>Wl)
        {
            cout<<"Over Weight Max limit "<<Wl<<endl;
            cout<<"First "<<Count<<" Members can get into the lift"<<endl;
            break;
        }
        Count++;
    }
    while(!temp.isEmpty())
    {
        q.Enque(temp.Front());
        temp.Deque();
    }
    if(sum<=Wl)
    {
        cout<<"Good To go"<<endl;
    }

}
int main()
{
  Queue<int> q1;
  cout<<"How many wight?"<<endl;
  int x;
  cin>>x;
  for(int i=0; i<x; i++)
  {
      int n;
      cin>>n;
      q1.Enque(n);
  }
  cout<<"Enter the weight Limit"<<endl;
  int w;
  cin>>w;
  WeightMeter(q1,w);
   int n;
    cout<<"Enter a num: "<<endl;
   cin>>n;
   MakePalindrome(n);

}
