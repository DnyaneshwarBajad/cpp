#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x)
    {
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }

};
Node* buildTree(Node* root){
    cout<<"Enter Data"<<endl;
    int data;
    cin>>data;
    //base case
    if(data==-1){
    return NULL;}
    
    root=new Node(data);
    cout<<"Inset left"<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Inset right"<<data<<endl;
    root->right=buildTree(root->right);


    
}
void inorder(Node* root){
        if(root==NULL){
            return ;
        }
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }
    
    int main(){
    Node* root=NULL;
    root=buildTree(root);
    inorder(root);

    return 0;
}