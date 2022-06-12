#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct Node{

   int data;
   struct Node* link;
};
struct Node* Head;
void print(){
    struct Node* temp;
    temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
    }
}
void insert(int value){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=value;
    temp->link=NULL;
    if(Head==NULL)
    Head=temp;
    else{
        struct Node* t;
        t=Head;
        while(t->link!=NULL)
        {
            t=t->link;
           
        }
        t->link=temp;
    }
}
int main()
{

    Head=NULL;
    Head=(struct Node*)malloc(sizeof(struct Node));
    Head->data=56;
    Head->link=(struct Node*)malloc(sizeof(struct Node));
    Head->link->data=99;
    Head->link->link=NULL;
    insert(5);
    insert(77);
    insert(33);
    print();
}