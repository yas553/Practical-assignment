//Write a program to find the minimum and maximum element in a BST.
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};
Node*insert(Node*root,int value){
    if(root==NULL) return new Node(value);
    if(value<root->data) root->left=insert(root->left,value);
    else if(value>root->data) root->right=insert(root->right,value);
    return root;
}
Node*findMin(Node*root){
    while(root->left!=NULL) root=root->left;
    return root;
}
Node*findMax(Node*root){
    while(root->right!=NULL) root=root->right;
    return root;
}
int main(){
    Node*root=NULL;
    int n,value;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>value;
        root=insert(root,value);
    }
    cout<<"Minimum element: "<<findMin(root)->data<<"\n";
    cout<<"Maximum element: "<<findMax(root)->data<<"\n";
    return 0;
}
