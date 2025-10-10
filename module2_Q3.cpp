#include <iostream>
using namespace std;
#define SIZE 3
int stack[SIZE], top = -1;
bool isEmpty() 
{ 
    return top == -1; 
}
bool isFull() 
{ 
    return top == SIZE-1; 
}

int main() 
{
    if(isEmpty()) 
    {
        cout << "Stack is Empty\n";
    }
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;
    if(isFull()) 
    {
        cout << "Stack is Full\n";
    }
    return 0;
}
