
template<class T>
class BinaryTree{
   
   public:
   BinaryTree* left;
   BinaryTree* right;
   T data;
   BinaryTree(T data)
   {
    this->data=data;
    left=NULL;
    right=NULL;
   }
   ~BinaryTree()
   {
    delete left;
    delete right;
   }
};