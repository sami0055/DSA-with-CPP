#include<iostream>
using namespace std;
int sum(int a,int b)
{

    int c=a+b;
    return c;
}
int main()
{
    int x,y;
    cout<<"Enter two number for sum: "<<endl;
    cin>>x>>y;
    int z=sum(x,y);
    cout<<"Sum is : "<<z<<endl;
}
