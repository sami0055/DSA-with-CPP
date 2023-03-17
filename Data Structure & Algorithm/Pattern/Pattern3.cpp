#include<bits/stdc++.h>
using namespace std;

void pattern31(int n)
{
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<n-j+1<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    pattern31(n);  

}