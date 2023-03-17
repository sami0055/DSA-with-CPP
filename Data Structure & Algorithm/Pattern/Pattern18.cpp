#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=n-i+1;
        int k=1;
        while(k<=j)
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;

    }
}