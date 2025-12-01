//Write a program to insert and delete nodes in a circular linked list.
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
        newNode->next=head;
        return;
    }
    Node* temp=head;
    while(temp->next!=head)
        temp=temp->next;
    temp->next=newNode;
    newNode->next=head;
}
void deleteNode(Node*& head,int value){
    if(head==nullptr) return;
    Node *temp=head, *prev=nullptr;
    if(head->data==value){
        if(head->next==head){
            delete head;
            head=nullptr;
            return;
        }
        while(temp->next!=head) temp=temp->next;
        Node* toDelete=head;
        temp->next=head->next;
        head=head->next;
        delete toDelete;
        return;
    }
    prev=head;
    temp=head->next;
    while(temp!=head && temp->data!=value){
        prev=temp;
        temp=temp->next;
    }
    if(temp->data==value){
        prev->next=temp->next;
        delete temp;
    }
}
void printList(Node* head){
    if(head==nullptr){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    cout<<"(head)"<<endl;
}
int main(){
    Node* head=nullptr;
    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    insertAtEnd(head,40);
    cout<<"Circular list:"; printList(head);
    deleteNode(head,10);
    cout<<"After deleting 10:"; printList(head);
    deleteNode(head,30);
    cout<<"After deleting 30:"; printList(head);
    insertAtEnd(head,50);
    cout<<"After inserting 50:"; printList(head);
    return 0;
}
