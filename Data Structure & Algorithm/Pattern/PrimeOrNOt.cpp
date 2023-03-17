#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=2;
    bool flag=true;
    while(i<=n-1)
    {
        if(n%i==0)
        {
            
            flag=false;
            break;
        }
        i++;
    }
     if(flag)
     cout<<"Prime "<<endl;
     else
     cout<<"Not prime"<<endl;
}