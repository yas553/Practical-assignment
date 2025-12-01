//Write a program to create a singly linked list and display it.
#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
node* createnode(int value){
	node* newnode= new node;
	newnode->data=value;
	newnode->next=nullptr;
	return newnode;
}
int main(){
	node* head=createnode(10);
	node* sec=createnode(11);
	head->next=sec;
	node* third=createnode(12);
	sec->next=third;
	node* temp = head;
	while(temp!=nullptr){
		cout<<temp->data<<"\n";
		temp = temp->next;
	}
	return 0;
}