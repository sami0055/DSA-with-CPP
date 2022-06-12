#include<iostream>
#include "Node.cpp"
using namespace std;

void printNode(Node* head)
{
   Node* temp=head;
   while(temp!=NULL)
   {
       cout<<temp->data<<" ";
       temp=temp->next;
   }
}

Node* InsertNode()
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

Node* InsertAtithIndex(Node* head,int i,int data)
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
    if(temp!=NULL)
    {

    newNode->next=temp->next;
    temp->next=newNode;
    }
  return head;

    
}

Node* DeleteNodeatIthPosition(Node* head,int i)
{
    Node* temp=head;
    int count=0;
    if(i==0)
    {
     Node* a=temp;
     Node* b=a->next;
     head=b;
     delete a;
     return head;

    }

    while(temp!=NULL && count<i-1)
    {
        temp=temp->next;
        count++;
    }
 
    if(temp!=NULL)
    {
   Node* a=temp->next;
   Node*  b=a->next;
    temp->next=b;
    delete a;
    }
 
    return head;
    
}
int main()
{

    Node* head=InsertNode();
    printNode(head);
    cout<< "Enter the ith pos: "<<endl;
    int i;
    cin>>i;
    head=DeleteNodeatIthPosition(head,i);
    cout<<endl;
    printNode(head);
   

}