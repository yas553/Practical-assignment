#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* createNode(int value){
    Node* newNode=new Node;
    newNode->data=value;
    newNode->left=nullptr;
    newNode->right=nullptr;
    return newNode;
}
void printNode(Node* node){
    if(node==nullptr){
        cout<<"Node is null\n";
        return;
    }
    cout<<"Root:"<<node->data<<"\n";
    if(node->left) cout<<"Left child:"<<node->left->data<<"\n";
    else cout<<"Left child:null\n";
    if(node->right) cout<<"Right child:"<<node->right->data<<"\n";
    else cout<<"Right child:null\n";
}
int main(){
    Node* root=createNode(10);
    root->left=createNode(20);
    root->right=createNode(30);
    cout<<"Binary tree nodes:\n";
    printNode(root);
    return 0;
}
