#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int num1=10,num2=15;
    swap(num1,num2);
    cout<<"After swaping num1: "<<num1<<endl;
    cout<<"After swaping num2: "<<num2;
}
