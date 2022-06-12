#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node* link;
};
struct Node* head;
void print(){
    struct Node* temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
    }
}
void insert(int value){
  struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
  temp1->data=value;
 
  if(head==NULL || temp1->data < head->data)
  {
    temp1->link=head;
    head=temp1;
  }
  else{
    struct Node* pred;
    struct Node* p;
    pred=head;
    p=pred->link;
    while( p!=NULL && temp1->data > p->data){
      pred=p;
      p=p->link;
      
    }
    pred->link=temp1;
    temp1->link=p;

  }
  

    }

void InsertAtTheEnd(int value){
  struct Node* temp=(struct Node*)(malloc(sizeof(struct Node)));
  temp->data=value;
  temp->link=NULL;
  if(head==NULL){
    head=temp;
  }
  else{
    struct Node* t;
    t=head;
    while(t->link!=NULL){
        t=t->link;
    } 
   
   t->link=temp;

   }
}
int main(){
   head=NULL;
   InsertAtTheEnd(4);
   InsertAtTheEnd(10);
  InsertAtTheEnd(13);
  insert(12);
  insert(30);
  insert(1);
   print();
   
  

}