//Write a program to display top element of a stack without removing it.
#include <iostream>
using namespace std;
const int size=10;
int stk[size];
int pointer=-1;
void dis(){
    cout<<"\nElements in stack are : ";
    for(int i=0;i<=pointer;i++)
        cout<<stk[i]<<" ";
}
void push(int element){
    if(pointer==size-1){
        cout<<"Stack is full\n";
    }
    else{
        pointer++;
        stk[pointer]=element;
    }
}
void pop(){
    if(pointer==-1){
        cout<<"Stack is empty\n";
    }
    else{
        pointer--;
    }
}
void peek(){
    if(pointer==-1){
        cout<<"Stack is empty\n";
    }
    else{
        cout<<"Top element: "<<stk[pointer]<<"\n";
    }
}
int main(){
    push(19);
    push(7);
    push(20);
    dis();
    peek();
    pop();
    dis();
    peek();
    return 0;
}
