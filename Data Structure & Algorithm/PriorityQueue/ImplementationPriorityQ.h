#include<bits/stdc++.h>
using namespace std;
class PriorityQueue{

   vector<int> pq;
   public:
    PriorityQueue()
    {

    }
    bool isEmpty()
    {
        return pq.size()==0;
    }
    int getSize()
    {
        return pq.size();
    }
    int getMin()
    {
      if(isEmpty())
      return 0;

      return pq[0];
    }
    void Insert(int element)
    {
        pq.push_back(element);

        int childIndex=pq.size()-1;
        while(childIndex>0)
        {
        int parentIndx=(childIndex-1)/2;
        
        if(pq[childIndex]<pq[parentIndx])
        {
            swap(pq[childIndex],pq[parentIndx]);
        }
        else{
            break;
        }
        childIndex=parentIndx;

        }
       
    }

    int  removeMin()
    {
      if(isEmpty())
      return 0;
      int ans=pq[0];
      int s=pq.size()-1;
      pq[0]=pq[s];
      pq[s]=ans;
      pq.pop_back();
     
     int Pp=0;
 
    int lcI=2*Pp+1;
    int rci=2*Pp+2;
    int min=Pp;
     while(lcI < pq.size())
     {
     
     lcI=2*Pp+1;
     rci=2*Pp+2;
     if(pq[Pp]>pq[lcI])
     {
        min=lcI;
        swap(pq[Pp],pq[lcI]);
        Pp=min;

     }
     else if(rci<pq.size() && pq[Pp]>pq[rci])
     {
       
        min=rci;
        swap(pq[Pp],pq[rci]);
        Pp=min;
     }
     if(Pp==min){
        break;
     }
     
    
     }
     return ans;
     

    
   }


};
