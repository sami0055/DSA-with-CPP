#include<bits/stdc++.h>
using namespace std;

int sumOfEvenNumber(int n)
{
    int i=1;
    int sum=0;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum+=i;
        }

        i++;

    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int i=0,sum=0;
    while(i<=n)
    {

     sum+=i;
     i++;
    }
    cout<<"Sum is "<<sum<<endl;
    cout<<"Sum of even number "<<sumOfEvenNumber(n)<<endl;
}