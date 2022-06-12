

class List;

class Node{
    int data;
   
    public:
    Node(int d){
        data=d;
        next=NULL;

    }
    int getData(){
        return data;
    }
     Node* next;
    friend class List;

};
class List
{
 Node *Head;
 Node *Tail;
public:
    List():Head(NULL),Tail(NULL){}
    Node* Begin(){
        return Head;
    }

   void push_front(int data){
       if(Head==NULL){
           Node *n=new Node(data);
           Head=Tail=n;

       }
       else{
           Node *n =new Node(data);
           n->next=Head;
           Head=n;
       }

   }
   void push_back(int data){
       if(Head==NULL){
             Node *n=new Node(data);
           Head=Tail=n;

       }
       else{
            Node *n=new Node(data);
            Tail->next=n;
            Tail=n;
       }
   }

   void insert(int data,int pos){
       if(pos==0)
       {
           push_front(data);
           return;
       }
       Node* temp=Head;
       for(int i=1; i<=pos-1; i++){
           temp=temp->next;
       }
       Node* n=new Node(data);
       n->next=temp->next;
       temp->next=n;

   }
   void InsertInaSortedList(int data){
       Node* n=new Node(data);
       if(Head==NULL || n->data < Head->data){
           n->next=Head;
           Head=n;
       }
       else{
           Node* pred=Head;
           Node* p=pred->next;
           while( p!=NULL && n->data > p->data){
               p=p->next;
           }
           pred->next=n;
           n->next=p;
       }

   }
};

