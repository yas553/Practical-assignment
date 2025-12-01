//Write a program to find the height of a binary tree.
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
int height(Node*root){
    if(root==NULL) return -1; 
    int leftH=height(root->left);
    int rightH=height(root->right);
    return 1+(leftH>rightH?leftH:rightH);
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
    cout<<"Height of tree: "<<height(root)<<"\n";
    return 0;
}
