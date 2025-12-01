//Write a program to reverse a singly linked list.
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
void printList(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void reverseList(Node*& head){
    Node* prev=nullptr;
    Node* current=head;
    Node* next=nullptr;
    while(current!=nullptr){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}
int main(){
    Node* head=nullptr;
    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    insertAtEnd(head,40);
    insertAtEnd(head,50);
    cout<<"Original list:"; printList(head);
    reverseList(head);
    cout<<"Reversed list:"; printList(head);
    return 0;
}