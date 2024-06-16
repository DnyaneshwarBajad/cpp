#include<iostream>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
      this->data=x;
      this->left=NULL;
      this->right=NULL;
    }
};

TreeNode* insert(TreeNode* root,int val)
{
    if(root==NULL){
        return new TreeNode(val);
    }
    if(val < root->data){
        root->left=insert(root->left,val);
    }
if(val > root->data){
        root->right=insert(root->right,val);
    }
  return root;
}
void inOrderTraversal(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    // Traverse the left subtree
    inOrderTraversal(root->left);

    // Visit the root node
    cout << root->data << " ";

    // Traverse the right subtree
    inOrderTraversal(root->right);
}

int main() {
    TreeNode* root = NULL; // Initialize root to NULL

    // Insert values into the BST
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 12);
    inOrderTraversal(root);
    }
