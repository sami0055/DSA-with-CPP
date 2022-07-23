#include <iostream>
#include "Queue.cpp"
using namespace std;

int main()
{
    Queue<int> q;
    q.Enqueue(12);
    q.Enqueue(4);
    q.Enqueue(34);
    q.Enqueue(344);
    int t;
    while(!q.isEmpty())
    {


       q.Dequeue(t);
        cout<<t<<" ";
    }

    return 0;
}
