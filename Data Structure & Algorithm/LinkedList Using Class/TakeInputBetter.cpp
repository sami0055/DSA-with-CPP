#include<iostream>
#include "Node.cpp"
using namespace std;

Node* takeInputBetter()
{
    //Time Complexity O(N)
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while(data!=-1)
    {
        Node *newNode=new Node(data);
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
void printLinkedList(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<< " ";
        temp=temp->next;
    }

}
int main()
{

  Node* head=takeInputBetter();
  printLinkedList(head);
  

}