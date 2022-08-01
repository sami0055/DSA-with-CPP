#include<iostream>
using namespace std;
#include "BinaryTree.h"
#include<queue>
void printTree(BinaryTree<int>* root)
{
    if(root==NULL)
    return;
    cout<<root->data<<": ";
    if(root->left!=NULL)
    cout<<"L"<<root->left->data;
    if(root->right!=NULL)
    cout<<"R"<<root->right->data;
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}
void PrintBetter(BinaryTree<int>* root)
{
    if(root==NULL)
    return;

     queue<BinaryTree<int>*> pendingNodes;
     pendingNodes.push(root);
     int count=0;
   
     while(pendingNodes.size()!=0)
     {
       BinaryTree<int>* front=pendingNodes.front();
       pendingNodes.pop();
       if(count==0)
       cout<<front->data<<endl;
       count++;
      if( front->left!=NULL && front->left->data!=-1)
      {
        BinaryTree<int>* child=front->left;
        pendingNodes.push(child);
         cout<<child->data<<endl;
      }
      if(front->left!=NULL && front->right->data!=-1){
        BinaryTree<int>* child=front->right;
        pendingNodes.push(child);
        cout<<child->data<<endl;
      }
       
     }
}
BinaryTree<int>* takeInput()
{
    int data;
    cout<<"Enter data: "<<endl;
    cin>>data;
    if(data==-1)
    return NULL;

    BinaryTree<int>* root=new BinaryTree<int>(data);
    BinaryTree<int>* leftChild=takeInput();
    BinaryTree<int>* rightChild=takeInput();
    root->left=leftChild;
    root->right=rightChild;
    return root;

}

BinaryTree<int>* takeInputBetter()
{
    int data;
    cout<<"enter root data"<<endl;
    cin>>data;
    if(data==-1)
    return NULL;

    BinaryTree<int>* root=new BinaryTree<int>(data);

    queue<BinaryTree<int>*> pendingNode;
    pendingNode.push(root);

    while(pendingNode.size()!=0)
    {
        BinaryTree<int>* front=pendingNode.front();
        pendingNode.pop();
        cout<<"Enter left child of "<<front->data<<endl;
        int ld;
        cin>>ld;
        if(ld!=-1)
        {
            BinaryTree<int>* child=new BinaryTree<int>(ld);
            front->left=child;
            pendingNode.push(child);
        }
           
        cout<<"Enter right child of "<<front->data<<endl;
        int rd;
        cin>>rd;
        if(rd!=-1)
        {
            BinaryTree<int>* child=new BinaryTree<int>(rd); 
            front->right=child;
            pendingNode.push(child);
        }

    }

    return root;
    


}
int NumOfNodes(BinaryTree<int>* root)
{
    if(root==NULL)
    return 0;
    
    return 1+NumOfNodes(root->left)+NumOfNodes(root->right);
}
void InorderPrint(BinaryTree<int>* root)
{
    if(root==NULL)
    return ;

    InorderPrint(root->left);
    cout<<root->data<<" ";
    InorderPrint(root->right);
}
int main()
{
   // BinaryTree<int>* root=takeInput();\

     BinaryTree<int>* root=takeInputBetter();
    // printTree(root);
    PrintBetter(root);
    InorderPrint(root);
    cout<<"Number of nodes: "<<NumOfNodes(root)<<endl;

}