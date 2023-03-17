#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=i;
        int k=1;
        while(k<=n)
        {
            cout<<char(65+j-1)<<" ";
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
}