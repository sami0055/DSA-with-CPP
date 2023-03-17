#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int s=65;
    while(i<=n)
   {
     int j=1;
     
     while(j<=n)
     {
        cout<<char(s)<<" ";
        j++;
     }
  
     cout<<endl;
     s=s+i;
        i++;
   }

}