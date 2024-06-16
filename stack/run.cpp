#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    // Constructor using initializer list
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to insert a new node in the binary tree
TreeNode* insert(TreeNode* root, int val) {
    if (root == nullptr) {
        return new TreeNode(val);
    }
    // Insert the node in the leftmost available position
    if (root->left == nullptr) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

// Function to print the binary tree in inorder traversal
void inorderTraversal(TreeNode* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        cout << root->val << " ";
        inorderTraversal(root->right);
    }
}

// Function to print the binary tree in preorder traversal
void preorderTraversal(TreeNode* root) {
    if (root != nullptr) {
        cout << root->val << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// Function to print the binary tree in postorder traversal
void postorderTraversal(TreeNode* root) {
    if (root != nullptr) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->val << " ";
    }
}

int main() {
    TreeNode* root = new TreeNode(1);
    insert(root, 2);
    insert(root, 3);
    insert(root, 4);
    insert(root, 5);

    cout << "Inorder traversal of the binary tree: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Preorder traversal of the binary tree: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Postorder traversal of the binary tree: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}
