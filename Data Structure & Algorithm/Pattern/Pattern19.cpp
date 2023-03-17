#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int k=i-1;
        while(k--)
        cout<<" ";

        int l=n-i+1;
        int m=1;
        while(m<=l)
        {
            cout<<"*";
            m++;
        }
        cout<<endl;
        i++;
    }
}