#include <iostream>
using namespace std;
#define SIZE 5
int stack[SIZE], top = -1;
void push(int value) 
{
    if(top<SIZE-1)
    {
        stack[++top]=value;
    }
}

void peek() 
{
    if(top==-1) 
    {
        cout<<"Stack is empty\n";
    }
    else 
    {
        cout<<"Top element ="<<stack[top]<<endl;
    }
}

int main() 
{
    push(11);
    push(22);
    push(33);
    peek();
    return 0;
}
