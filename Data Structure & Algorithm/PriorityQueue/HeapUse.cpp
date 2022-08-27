#include<bits/stdc++.h>
using namespace std;
#include "ImplementationPriorityQ.h"

int main()
{
    PriorityQueue p;
    p.Insert(100);
     p.Insert(10);
      p.Insert(15);
       p.Insert(4);
        p.Insert(17);
         p.Insert(21);
          p.Insert(67);

          cout<<p.getSize()<<endl;
          cout<<p.getMin()<<endl;

          while(!p.isEmpty())
          {
            cout<<p.removeMin()<<" ";
          }
          cout<<endl;

    
}