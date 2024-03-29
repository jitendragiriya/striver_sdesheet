#include<iostream>
using namespace std;

//codestudio code
#include <stack>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

class BSTiterator
{
    stack<TreeNode<int> *> st;

public:
    void pushAll(TreeNode<int> *root)
    {
        for (; root != NULL; st.push(root), root = root->left)
            ;
    }
    BSTiterator(TreeNode<int> *root)
    {
        pushAll(root);
    }

    int next()
    {
        TreeNode<int> *node = st.top();
        st.pop();
        pushAll(node->right);
        return node->data;
    }

    bool hasNext()
    {
        return !st.empty();
    }
};

/*
    Your BSTIterator object will be instantiated and called as such:
    BSTIterator iterator(root);
    while(iterator.hasNext())
    {
       print(iterator.next());
    }
*/
// codestudio code

int main()
{
    
    return 0;
}