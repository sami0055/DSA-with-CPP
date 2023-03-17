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
         int j=1;
        while(j<=i)
        {
            cout<<char('A'+k)<<" ";
            k++;
            j++;
        }
        cout<<endl;
        i++;
    } 
}