#include <iostream>
using namespace std;
#define SIZE 5
int queue[SIZE], front = -1, rear = -1;
void enqueue(int value) 
{
    if(rear == SIZE-1) 
    {
        cout << "Queue Overflow\n";
    }
    else 
    {
        if(front == -1) 
        {
            front = 0;
            queue[++rear] = value;
        }
        cout << value << " enqueued\n";
    }
}

void dequeue() 
{
    if(front== -1||front>rear) 
    {
        cout<<"Queue Underflow\n";
    }
    else 
    {
        cout<<queue[front++]<<"dequeued\n";
    }
}

int main() 
{
    enqueue(10);
    enqueue(20);
    dequeue();
    enqueue(30);
    return 0;
}
