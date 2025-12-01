//Write a menu-driven program to perform stack operations using array.
#include <iostream>
using namespace std;
const int size=10;
int stack[size];
int top=-1;
void push(int element){
    if(top==size-1)cout<<"Stack Overflow\n";
    else stack[++top]=element;
}
void pop(){
    if(top==-1)cout<<"Stack Underflow\n";
    else top--;
}
void peek(){
    if(top==-1)cout<<"Stack is empty\n";
    else cout<<"Top element: "<<stack[top]<<"\n";
}
void display(){
    if(top==-1)cout<<"Stack is empty\n";
    else{
        cout<<"Elements in stack: ";
        for(int i=0;i<=top;i++)cout<<stack[i]<<" ";
        cout<<"\n";
    }
}
int main(){
    int choice,element;
    while(true){
        cout<<"Menu:\n";
        cout<<"1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. Peek\n";
        cout<<"4. Display\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter element to push: ";
                cin>>element;
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout<<"Exiting...\n";
                return 0;
            default:
                cout<<"Invalid choice. Please try again.\n";
        }
    }
}