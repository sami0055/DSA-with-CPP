#include<iostream>
#include "Tree.h"
#include<queue>
using namespace std;

void PrintTree(TreeNode<int>* root)
{
    if(root==NULL)
    return;//edge case not a base case

    cout<<root->data<<": ";
    for(int i=0; i<root->childern.size(); i++)
    {
        cout<<root->childern[i]->data<<",";
    }
    cout<<endl;
    for(int i=0; i<root->childern.size(); i++)
    {
        PrintTree(root->childern[i]);
    }
}
void PrintingNodes(TreeNode<int>* root)
{
    if(root==NULL)
    return;

    cout<<root->data<<": ";
    for(int i=0; i<root->childern.size(); i++)
    {
        cout<<root->childern[i]->data<<",";
    }
    cout<<endl;
    
    for(int i=0; i<root->childern.size(); i++)
    {
        PrintingNodes(root->childern[i]);
    }
}
int NumOfNodes(TreeNode<int>* root)
{
    int ans=1;
    for(int i=0; i<root->childern.size(); i++)
    {
        ans+=NumOfNodes(root->childern[i]);
    }
    return ans;
}
TreeNode<int>* takeInput()
{
   int data;
   cout<<"Enter Data "<<endl;
   cin>>data;
   TreeNode<int>* root=new TreeNode<int>(data);
   int n;
   cout<<"Enter num of childern of "<<data<<endl;
   cin>>n;
   for(int i=0; i<n; i++)
   {
    TreeNode<int>* child=takeInput();
    root->childern.push_back(child);
   }
   return root;

}
TreeNode<int>* takeInputTree()
{
    int rootdata;
    cout<<"Enter root data "<<endl;
    cin>>rootdata;
    TreeNode<int>* root=new TreeNode<int>(rootdata);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0)
    {
        TreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter the num of child of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0; i<numChild; i++)
        {
            int childData;
            cout<<"Enter "<<i<<" th child of "<<front->data<<endl;
            cin>>childData;
            TreeNode<int>* child=new TreeNode<int>(childData);
            front->childern.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;

}
int HightOfNode(TreeNode<int> * root)
{
    if(root==NULL)
    return 0;
    int h=1;
    int max=0;
    for(int i=0; i<root->childern.size(); i++)
    {
        h=h+HightOfNode(root->childern[i]);
        if(h>max)
        max=h;
        
    }
    return max;
}
void printAtLevelK(TreeNode<int>*root ,int k)
{
    if(root==NULL)
    return;
    if(k==0)
    {
        cout<<root->data<<endl;
        return;
    }
    for(int i=0; i<root->childern.size(); i++)
    {
        printAtLevelK(root->childern[i],k-1);
    }
}
int NumOfleafNodes(TreeNode<int>* root)
{
  
    if(root==NULL)
    return 1;
    int ans=0;
    for(int i=0; i<root->childern.size(); i++)
    {
      ans+= NumOfleafNodes(root->childern[i]);
    }
    
   
    
}
void PrintPreOrder(TreeNode<int>* root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";

    for(int i=0; i<root->childern.size(); i++)
    {
        PrintPreOrder(root->childern[i]);
    }

}
void PrintPostOreder(TreeNode<int>* root)
{
    if(root==NULL)
    return;
   

    for(int i=0; i<root->childern.size(); i++)
    {
        PrintPreOrder(root->childern[i]);
    }
     cout<<root->data<<" ";
}

void DeleteNodes(TreeNode<int>* root)
{
    for(int i=0; i<root->childern.size(); i++)
    {
        DeleteNodes(root->childern[i]);
    }
    delete root;
}
int main()
{

    /*
    TreeNode<int>* root=new TreeNode<int>(2);
    TreeNode<int>* node1=new TreeNode<int>(3);
    TreeNode<int>* node2=new TreeNode<int>(4);
  

    root->childern.push_back(node1);
    root->childern.push_back(node2);
    */
  TreeNode<int>* root= takeInput();
    
   // PrintTree(root);
//   int t= NumOfleafNodes(root);
//   cout<<"Leaf Nodes : "<<t<<endl;
  // PrintingNodes(root);
  PrintPostOreder(root);
  cout<<endl;
  PrintPreOrder(root);

}