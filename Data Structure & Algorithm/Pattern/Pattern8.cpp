#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1,i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}