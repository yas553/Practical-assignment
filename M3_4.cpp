//Write a program to delete a node from the beginning of a singly linked list.
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
void insertAtBeginning(Node*&head,int value){
    Node* newNode=createNode(value);
    newNode->next=head;
    head=newNode;
}
void insertAtEnd(Node*&head,int value){
    Node* newNode=createNode(value);
    if(head==nullptr){
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newNode;
}
void deleteHead(Node*&head){
    if(head==nullptr)return;
    Node* temp=head;
    head=head->next;
    delete temp;
}
void printList(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head=nullptr;
    insertAtBeginning(head,30);
    insertAtBeginning(head,20);
    insertAtBeginning(head,10);
    printList(head);
    insertAtEnd(head,40);
    insertAtEnd(head,50);
    printList(head);
    printList(head);
    deleteHead(head);
    printList(head);
    printList(head);
    printList(head);
    return 0;
}