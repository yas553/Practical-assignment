#include <iostream>
using namespace std;
#define SIZE 5
int stack[SIZE], top = -1;
void push(int value) 
{
    if(top==SIZE-1)
        cout<<"Stack Overflow\n";
    else 
    {
        top++;
        stack[top] = value;
        cout<<value<<"pushed\n";
    }
}

void pop() 
{
    if(top == -1)
        cout << "Stack Underflow\n";
    else {
        cout << stack[top] << " popped\n";
        top--;
    }
}

int main() 
{
    push(10);
    push(20);
    push(30);
    pop();
    pop();
    return 0;
}
