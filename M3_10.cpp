//Write a program to count the number of nodes in a linked list.
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* createNode(int value){
    Node* newNode=new Node;
    newNode->data=value;
    newNode->next=nullptr;
    return newNode;
}
void insertAtEnd(Node*& head,int value){
    Node* newNode=createNode(value);
    if(head==nullptr){
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=nullptr)
        temp=temp->next;
    temp->next=newNode;
}
int countNodes(Node* head){
    int count=0;
    Node* temp=head;
    while(temp!=nullptr){
        count++;
        temp=temp->next;
    }
    return count;
}
void printList(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head=nullptr;
    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    insertAtEnd(head,40);
    cout<<"Linked list:"; printList(head);
    cout<<"Number of nodes:"<<countNodes(head)<<endl;
    return 0;
}
