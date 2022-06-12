#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};

struct Node* Head;

void print()
{
    struct Node* temp;
     temp=Head;
     while(temp!=NULL)
     {
          cout<<temp->data<<endl;
          temp=temp->next;
     }
}
void insert(int value)
{
    
   struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
   temp->data=value;
   temp->next=Head;
   Head=temp;
   }
  

int main()
{
    Head=NULL;
    Head=(struct Node*)malloc(sizeof(struct Node));
    Head->data=56;
    insert(1);
    insert(45);
    insert(56);
    insert(7);
    print();
}