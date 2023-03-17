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
        {
            cout<<" ";
        }
        int m=n-i+1;
        int l=1;
        while(l<=m)
        {
            cout<<i;
            l++;
        }
        cout<<endl;
        i++;
    }
}