#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int x=10;
    int*px1=&x;
    int*px2=px1;
    *px2=10;
    cout<<*px1<<endl;

    int* px3=(int*)malloc(sizeof(int));
    free(px3);
    px3=NULL;
}