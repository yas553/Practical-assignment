#include <iostream>
using namespace std;
#define SIZE 5
int queue[SIZE], front = -1, rear = -1;
void enqueue(int value) 
{
    if(rear<SIZE-1) 
    {
        if(front == -1) 
        front = 0;
        queue[++rear] = value;
    }
}

void showFrontRear() 
{
    if(front== -1) 
    {
        cout << "Queue is empty\n";
    }
    else 
    {
        cout<<"Front ="<< queue[front] << ", Rear = " << queue[rear] << endl;
    }
}

int main() 
{
    enqueue(5);
    enqueue(10);
    enqueue(15);
    showFrontRear();
    return 0;
}
