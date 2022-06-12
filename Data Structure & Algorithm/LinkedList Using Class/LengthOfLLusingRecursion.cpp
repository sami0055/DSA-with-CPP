#include<iostream>
using namespace std;
#include "Node.cpp"
Node* takeInput()
{
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while (data!=-1)
    {
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
void PrintLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int LengthOfLLRecursively(Node* head){
    if(head==NULL)
    return 0;
    return 1+LengthOfLLRecursively(head->next);
}
int main()
{

  Node* head=takeInput();
  PrintLL(head);
  cout<<endl;
  int l=LengthOfLLRecursively(head);
  cout<<"Length is: "<<l<<endl;
  PrintLL(head);

}