//Write a program to perform post-order traversal of a binary tree.
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *left,*right;
};
struct QueueNode{
    struct Node* node;
    struct QueueNode* next;
};
struct Node* createNode(int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->left=newNode->right=NULL;
    return newNode;
}
void enqueue(struct QueueNode** front,struct QueueNode** rear,struct Node* node){
    struct QueueNode* temp=(struct QueueNode*)malloc(sizeof(struct QueueNode));
    temp->node=node;
    temp->next=NULL;
    if(*rear==NULL)
        *front=*rear=temp;
    else{
        (*rear)->next=temp;
        *rear=temp;
    }
}
struct Node* dequeue(struct QueueNode** front,struct QueueNode** rear){
    if(*front==NULL) return NULL;
    struct QueueNode* temp=*front;
    struct Node* node=temp->node;
    *front=(*front)->next;
    if(*front==NULL) *rear=NULL;
    free(temp);
    return node;
}
struct Node* insertLevelOrder(struct Node* root,int value){
    struct Node* newNode=createNode(value);
    if(root==NULL) return newNode;
    struct QueueNode *front=NULL,*rear=NULL;
    enqueue(&front,&rear,root);
    while(front!=NULL){
        struct Node* temp=dequeue(&front,&rear);
        if(temp->left==NULL){temp->left=newNode; break;}
        else enqueue(&front,&rear,temp->left);
        if(temp->right==NULL){temp->right=newNode; break;}
        else enqueue(&front,&rear,temp->right);
    }
    return root;
}
void postorder(struct Node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
int main(){
    struct Node* root=NULL;
    int n,value;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&value);
        root=insertLevelOrder(root,value);
    }
    printf("\nPostorder Traversal:");
    postorder(root);
    return 0;
}