#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int l=n-i;
        while(l--)
        {
            cout<<" ";
        }
        int k=1;
        while(k<=i)
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;

    }
}