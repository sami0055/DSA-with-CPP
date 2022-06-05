#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    float x=200;
    float *px=&x;
    *px=100;
    cout<<*px<<endl;
    cout<<x<<endl;
}