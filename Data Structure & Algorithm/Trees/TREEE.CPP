#include<iostream>
using namespace std;
#include<queue>
class Node{
   public:
   int data;
   Node* left;
   Node* rigth;
   
   Node(int data)
   {
    this->data=data;
    this->left=NULL;
    this->rigth=NULL;
   }
};

Node* TakeInput(Node* root)
{
    int data;
    cout<<"Enter the data "<<endl;
    cin>>data;
    if(data==-1)
    return NULL;
    root=new Node(data);
    cout<<"Enter data for inserting in left "<<endl; 
    root->left=TakeInput(root->left);
    cout<<"Enter data for inserting in right "<<endl;
    root->rigth=TakeInput(root->rigth);

    return root;
}
void InorderTraversal(Node* root)
{
   if(root==NULL)
   return;
   InorderTraversal(root->left);
   cout<<root->data<<" ";
   InorderTraversal(root->rigth);

}
void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* temp=q.front();
       
        q.pop();

        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
          cout<<temp->data<<" ";

        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->rigth!=NULL)
        {
            q.push(temp->rigth);
        }

        }
       

    }

}

void PreOrderTraversal(Node* root)
{

    if(root==NULL)
    return;
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->rigth);

}

void PostOrdertraversal(Node* root)
{
    if(root==NULL)
    return;
    PostOrdertraversal(root->left);
    PostOrdertraversal(root->rigth);
    cout<<root->data<<" ";
}

void  InputLevelWise(Node* &root)
{
    queue<Node*> q;
    int data;
    cout<<"Enter data for root "<<endl;
    cin>>data;
    root=new Node(data);
    q.push(root);
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        cout<<"Enter left node for "<<temp->data;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1)
        {
            temp->left=new Node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter right node for "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1)
        {
            temp->rigth=new Node(rightdata);
            q.push(temp->rigth);
        }
    }

}
void CountLeafNode(Node* root,int &count)
{
 
  if(root==NULL)
  return;

  if(root->left==NULL && root->rigth==NULL)
  {
    count++;
  }
  CountLeafNode(root->left,count);
  CountLeafNode(root->rigth,count);

 
}
void heightOfTree(Node* root,int &height)
{

    int max=-10000;
    if(root==NULL)
    {
        return;
    }
   height++;
   
   if(root->left==NULL && root->rigth==NULL)
   {
    if(height>max)
    max=height;
    height=max;
   }
  

   heightOfTree(root->left,height);
   heightOfTree(root->rigth,height);
   
  
}
int main()
{
    Node* root=NULL;

    InputLevelWise(root);
    // root=TakeInput(root);
    // cout<<"Inorder traversal ";
    // InorderTraversal(root);
    // cout<<endl;

    // cout<<"Pre order traversal ";
    // PreOrderTraversal(root);
    // cout<<endl;
    // cout<<"Post order traversal ";
    PostOrdertraversal(root);
    int count=0;
    CountLeafNode(root,count);
    cout<<"Leaf Node "<<count<<endl;
    int h=0;
    heightOfTree(root,h);
    cout<<"Height "<<h<<endl;
    // cout<<endl;

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
}