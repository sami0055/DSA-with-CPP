#include<iostream>
using namespace std;
#include<queue>
class Node{

    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }

};

int minElement(Node* root)
{
    Node* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp->data;

}

void InorderTraversal(Node* root)
{
   if(root==NULL)
   return;
   InorderTraversal(root->left);
   cout<<root->data<<" ";
   InorderTraversal(root->right);

}
Node* InsertIntoBTS(Node* root,int data) 
{
    if(root==NULL)
    {
        root=new Node(data);
        return root;
    }
    if(data>root->data)
    root->right=InsertIntoBTS(root->right,data);
    else{
        root->left=InsertIntoBTS(root->left,data);
    }
    return root;

}
void takeInput(Node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root=InsertIntoBTS(root,data);
        cin>>data;
    }
}
void deletefromBST(Node* &root, int val)
{
    if(root==NULL)
    return;
    if(root->data==val)
    {
        if(root->left==NULL && root->right==NULL)
        {
         Node* temp=root;
         root=NULL;
         delete temp;
        }
        if(root->left==NULL)
        {
             Node* temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==NULL)
        {
            Node* temp=root;
            root=root->left;
            delete temp;
        }
        else{
            
            int m=minElement(root->right);
            root->data=m;
            deletefromBST(root->right,m);
        }
    }
    else if(root->data>val)
    {
    
      deletefromBST(root->left,val);
    }
    else{
        deletefromBST(root->right,val);
    }
}
int main()
{
    Node* root=NULL;
    takeInput(root);
    InorderTraversal(root);
    deletefromBST(root,50);
    InorderTraversal(root);


}