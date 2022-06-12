#include<iostream>
using namespace std;
#include "Node.cpp"

Node* takeInput()
{
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while(data!=-1)
    {
        Node* newNode=new Node(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
 Node* insertNode(Node* head,int i,int data)
 {
     Node* newNode=new Node(data);

   Node* temp=head;
   int count=0;
   if(i==0)
   {
      newNode->next=head;
      head=newNode;
      return head;
   }
   while(temp!=NULL && count<i-1)
   {
       temp=temp->next;
       count++;
   }


/*
  Node* a=temp->next;
  temp->next=newNode;
  newNode->next=a;

*/
   if(temp!=NULL){
        newNode->next=temp->next;
    temp->next=newNode;
  
   }
   return head;
 
 }
 void PrintNode(Node* head)
 {
     Node* temp=head;
     while(temp!=NULL)
     {
         cout<<temp->data<<" "; 
         temp=temp->next;
     }
 }
int main()
{
 Node* head=takeInput();
PrintNode(head);
cout<<"Enter ith pos and data: "<<endl;
int i,data;
cin>>i>>data;
 head=insertNode(head,i,data);
cout<<endl;
PrintNode(head);


}