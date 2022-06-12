#include<iostream>
using namespace std;
#include "Node.cpp"
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
Node* InsertRecursivelu(Node* head,int index,int data)
{
    if(head==NULL)
        return NULL;
    if(index==0){
        Node* temp=new Node(data);
        temp->next=head;
        return temp;
    }
    
    if(index==1){
        Node* temp=new Node(data);
        temp->next=head->next;
        head->next=temp;
        return head;
    }
    Node* curr=InsertRecursivelu(head->next,index-1,data);
    
    return head;
}
int main(){

    Node* head=takeInput();
    PrintLL(head);
    int i;
    cin>>i;
    head=InsertRecursivelu(head,i,999);
    PrintLL(head);

    
}