#include<iostream>
#include "Node.cpp"
using namespace std;
Node* takeInput()
{
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while(data!=-1){
    Node* newNode=new Node(data);

    if(head==NULL)
    {
        head=newNode;
        tail=newNode;

    }else{
        tail->next=newNode;
        tail=tail->next;
    }
    cin>>data;
}
return head;

}
void PrintLL(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next; 
    }


}
Node* deleteNodeRecursively(Node* head,int i)
{
    if(head==NULL)
    {
        return head;
    }
    if(i==0)
    {
      Node* temp=head->next;
      head->next=NULL;
      delete head;
      return temp;
    }
    if(i==1)
    {
        Node* a=head->next;
        head->next=a->next;
        a->next=NULL;
        delete a;
        return head;
    }
    Node* curr= deleteNodeRecursively(head->next,i-1);
    return head;

}
int main()
{
     Node* head= takeInput();
     PrintLL(head);
     cout<<"Enter a position: "<<endl;
     int i;
     cin>>i;
    head= deleteNodeRecursively(head,i);
   cout<<endl;
   PrintLL(head);

}