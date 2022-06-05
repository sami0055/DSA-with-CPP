#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int x;
    x=10;
    cout<<x<<endl;
    int*px;
    px=&x;
    cout<<px<<endl;
    cout<<&x<<endl;
    cout<<*px<<endl;

   *px=20;
   cout<<*px<<endl;
   cout<<x<<endl;
}