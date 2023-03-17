#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int c=0;
    while(i<=n)
    {
        int l=1;
        while(l<=n-i+1)
        {
            cout<<l;
            l++;
        }

        int s=i-1;
         if(s>0)
         {
            int k=i+(c++);
            while(k--)
            {
                cout<<"*";
            }
            
         }

         int k=n-i+1;
         while(k)
         {
            cout<<k;
            k--;
         }
         i++;
         cout<<endl;

    }
}