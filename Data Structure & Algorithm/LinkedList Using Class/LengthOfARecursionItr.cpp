#include<iostream>
#include "Node.cpp"
using namespace std;

Node* takeInput()
{
   int data;
   cin>>data;
   Node*head=NULL;
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
void printNode(Node* head)
{
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int LengthOfLL(Node* head)
{
    Node* temp=head;
    int count=0;
    while(temp!=0)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
int main()
{
   Node* head=takeInput();
   printNode(head);
   int l=LengthOfLL(head);
   cout<<endl;
   cout<<"Lenght of LL is: "<<l<<endl;

}