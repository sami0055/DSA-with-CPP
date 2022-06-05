#include<iostream>
#include<stdio.h>
using namespace std;
//Not recomended 
int* getValue()
{

int x;
x=20;
  return &x;
}

int main()
{

   int*px=getValue();
    cout<<*px<<endl;

}