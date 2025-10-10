#include <iostream>
using namespace std;
#define SIZE 5
int cq[SIZE], front = -1, rear = -1;
void enqueue(int value) 
{
    if((rear+1)%SIZE == front) 
    {
        cout << "Circular Queue Full\n";
    }
    else 
    {
        if(front == -1) 
        {
            front = 0;
            rear = (rear+1) % SIZE;
            cq[rear] = value;
        }
        cout << value << " enqueued\n";
    }
}

void dequeue() 
{
    if(front == -1) 
    {
        cout << "Circular Queue Empty\n";
    }
    else 
    {
        cout << cq[front] << " dequeued\n";
        if(front == rear) front = rear = -1;
        else front = (front+1) % SIZE;
    }
}

int main() 
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    enqueue(4);
    return 0;
}
