#include<iostream>
#include<stdio.h>
using namespace std;
 void change(int *x)
 {
     *x=30;
     cout<<*x<<endl;
 }
 int main()
 {
     int x=20;
     change(&x);//Pass by refrence
     cout<<x<<endl;
 }