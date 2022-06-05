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
  struct MyStruct s1;
  s1.age=21;
  s1.height=5.5;
 
 struct MyStruct *px;

 px=&s1;
 //(*px).age=22;
 px->age=22;

 //(*px).height=5.7;
 px->height=5.7;
 cout<<s1.age<<endl;
 cout<<s1.height<<endl;
  
  
   
}