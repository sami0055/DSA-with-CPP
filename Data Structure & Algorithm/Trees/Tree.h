#include<vector>
using namespace std;
template<class T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> childern;

    TreeNode(T data)
    {
        this->data=data;
    }
};