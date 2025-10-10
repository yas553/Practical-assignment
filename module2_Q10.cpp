#include <iostream>
using namespace std;
#define SIZE 5
int stack[SIZE], top=-1;
void push(int value) 
{
    if(top == SIZE-1) 
    {
        cout << "Overflow\n";
    }
    else 
    {
        stack[++top] = value;
    }
}
void pop() 
{
    if(top == -1) 
    {
        cout << "Underflow\n";
    }
    else 
    {
        cout << stack[top--] << " popped\n";
    }
}
void display() 
{
    if(top == -1) 
    {
        cout << "Stack Empty\n";
    }
    else 
    {
        cout << "Stack: ";
        for(int i=0; i<=top; i++) 
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int choice, val;
    do {
        cout << "\n1.Push  2.Pop  3.Display  4.Exit\n";
        cin >> choice;
        switch(choice) 
        {
            case 1: cout << "Enter value: "; cin >> val; push(val); break;
            case 2: pop(); break;
            case 3: display(); break;
        }
    } 
    while(choice!=4);
    return 0;
}
