#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;
    int b=30;
    cout<<a<<endl<<r<<endl;
    r=b;
    cout<<"Value is : "<<a<<endl<<r;
}
