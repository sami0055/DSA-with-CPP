#include<iostream>
using namespace std;

#include "Node.cpp"

void print(Node* head)
{
    Node* temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data <<" ";
        temp=temp->next;
    }
}

Node* takeInput()
{

    //TC: O(N^2)
    int data;
    cin>>data;
    Node* head=NULL;
    while(data!=-1)
    {
        Node* newNode=new Node(data);
        if(head==NULL)
        {
            head=newNode;
        }
        else{
            Node *temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newNode;
        }
        cin>>data;
    }
    return head;
}

Node* takeInputBetter()
{
    //TC: O(N)
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
    // Node* n1=new Node(1);
    // Node* n2=new Node(2);
    // Node* n3=new Node(3);
    // Node* n4=new Node(4);
    // Node* n5=new Node(5);
    // Node* head=n1;
    // n1->next=n2;
    // n2->next=n3;
    // n3->next=n4;
    // n4->next=n5;
    // print(head);
    // cout<<endl;

     Node* head=takeInput();
  //  Node* head=takeInputBetter();
    print(head);

}
