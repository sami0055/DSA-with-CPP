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
int MaxElement(Node* root)
{
    Node* temp=root;;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp->data;
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
void SearchTree(Node* root,int x,bool &found)
{
   if(root==NULL)
   {
    found=false;
    return;
   }

   if(x>root->data)
   {
    SearchTree(root->right,x,found);
   }
   else if(x<root->data)
   {
    SearchTree(root->left,x,found);
   }
   else{
    found=true;
    return;
   }
   
}
bool SearchSecondVersion(Node* root,int x)
{
    // if(root==NULL)
    // return false;
    // if(x==root->data)
    // return true;
    // else if(x<root->data)
    // SearchSecondVersion(root->left,x);
    // else{
    //     SearchSecondVersion(root->right,x);
    // }
  
   Node* temp=root;
   while(temp!=NULL)
   {
      if(x==root->data)
      return true;
      else if(x<root->data)
      temp=temp->left;
      else{
        temp=temp->right;
      }
   }
   // SC: O(1)
   //TC: log(n) worst case O(n)
   return false;
    

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
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }

        }
       

    }

}

void InorderTraversal(Node* root)
{
   if(root==NULL)
   return;
   InorderTraversal(root->left);
   cout<<root->data<<" ";
   InorderTraversal(root->right);

}

void PreOrderTraversal(Node* root)
{

    if(root==NULL)
    return;
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);

}

void PostOrdertraversal(Node* root)
{
    if(root==NULL)
    return;
    PostOrdertraversal(root->left);
    PostOrdertraversal(root->right);
    cout<<root->data<<" ";
}

int main()
{
    Node* root=NULL;
    cout<<"Enter BST input "<<endl;
    takeInput(root);
    cout<<"Inorder "<<endl;
    InorderTraversal(root);

    cout<<"Pre order: "<<endl;
    PreOrderTraversal(root);

    cout<<"Post order "<<endl;
    PostOrdertraversal(root);

    // bool found=false;
    // SearchTree(root,100,found);
    // if(found)
    // cout<<"Item Found "<<endl;
    // else{
    //     cout<<"Not found "<<endl;
    // }

    bool f=SearchSecondVersion(root,100);
    if(f)
    cout<<"Item found "<<endl;
    else
    cout<<"Item not found "<<endl;

    int x=minElement(root);
    cout<<"Min element "<<x<<endl;

}