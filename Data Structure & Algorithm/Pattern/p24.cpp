#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    int i=1;
    int c=1;
    while(i<=n)
    {
        if(i==1)
        {
            int r=n-i;
            while(r>0)
            {
                cout<<" ";
                r--;
            }
            cout<<" "<<1;
            cout<<endl;
        }else{
            
            int r=n-i;
            int a=1;
            while(a<=r)
            {
                cout<<" ";
                a++;
            }
            int k=i+(c++);
            int l=1;
            while(l<=i)
            {
                cout<<l<<" ";
                l++;
            }
            int d=k-i;
            int t=1;
            while(d--)
            {
                cout<<d+1<<" ";
                // t++;
            }
            cout<<endl;
        }
        i++;
    }
    // while(i<=n)
    // {
    //     int k=n-i;
    //     while (k--)
    //     {
    //       cout<<" ";
    //     }
    //     int l=1;
    //     while(l<=i)
    //     {
    //         cout<<l;
    //         l++;
    //     }
    //     cout<<endl;
    //     i++;
        
    // }
    // int k=1;
    // while(k<=n-1)
    // {
    //     int j=k;
    //     while(j--)
    //     {
    //         cout<<j+1;

    //     }
    //     cout<<endl;
    //     k++;
    // }
}