#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int* change()
{
    int *px;
    px=(int*)malloc(sizeof(int));
    *px=10;
    return px;
}
int main()
{
      char *cx;
    cx=(char*)malloc(sizeof(char));
    cout<<sizeof(cx)<<endl;

    int ar[10]; //10*4=40
    cout<<sizeof(ar)<<endl;

   
    int* px=change();
    cout<<*px<<endl;
}