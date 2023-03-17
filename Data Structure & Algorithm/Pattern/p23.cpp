#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n)
    {
        int k=n-i;
        while(k--)
        cout<<" ";

        int l=i;
        int m=1;
        while(m<=l) 
        {
            cout<<count;
            count++;
            m++;
        }
        cout<<endl;
        i++;
    }
}