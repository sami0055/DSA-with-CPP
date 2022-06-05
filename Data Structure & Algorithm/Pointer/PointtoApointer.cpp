#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   int x=10;
   int*px;
   px=&x;
   int **ptr;//pointer to a integer pointer
   ptr=&px; 
   cout<<&x<<endl;
   cout<<px<<endl;
   cout<<&px<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr<<endl;

    

}