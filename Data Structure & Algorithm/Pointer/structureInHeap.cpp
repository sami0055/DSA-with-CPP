#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct MyStruct{
    int age;
    double height;
};
int main()
{

   struct MyStruct *px;
   px=(struct MyStruct*)malloc(sizeof(struct MyStruct));

   px->age=43;
   px->height=5.6;
   cout<<px->age<<endl;
   cout<<px->height<<endl;
   free(px);
   px=NULL;
}