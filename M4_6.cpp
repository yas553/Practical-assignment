//Write a program to search for a node in a BST.
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
Node*searchNode(Node*root,int key){
    if(root==NULL||root->data==key) return root;
    if(key<root->data) return searchNode(root->left,key);
    return searchNode(root->right,key);
}
int main(){
    Node*root=NULL;
    int n,value,key;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>value;
        root=insert(root,value);
    }
    cout<<"Enter value to search: ";
    cin>>key;
    Node*result=searchNode(root,key);
    if(result!=NULL) cout<<"Node found: "<<result->data<<"\n";
    else cout<<"Node not found\n";
    return 0;
}
