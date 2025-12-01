//Write a program to check if a stack is empty or full.
#include <iostream>
using namespace std;
const int size=10;
int stk[size];
int pointer=-1;

bool isEmpty(){
    return pointer==-1;
}

bool isFull(){
    return pointer==size-1;
}

void push(int element){
    if(isFull()){
        cout<<"Stack is full\n";
    }
    else{
        pointer++;
        stk[pointer]=element;
    }
}

void pop(){
    if(isEmpty()){
        cout<<"Stack is empty\n";
    }
    else{
        pointer--;
    }
}

int main(){
    push(5);
    push(10);
    for(int i=0;i<8;i++)push(i);
    pop();
    pop();
    return 0;
}
