#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int k=n-i;
        while(k--)
        {
            cout<<" ";
        }
        int l=1;
        while(l<=i)
        {
            cout<<i;
            l++;
        }
        cout<<endl;
        i++;
    }
}