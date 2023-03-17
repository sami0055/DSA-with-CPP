#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int j=1;
        while(j<=row)
        {
            cout<<row<<" ";
            j++;
        }
        cout<<endl;
        row++;
    }
}