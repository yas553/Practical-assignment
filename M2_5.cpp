// Write a program to display front and rear elements of a queue.
#include <iostream>
using namespace std;
const int size=10;
int queue[size];
int f=0;
int r=-1;
bool isEmpty(){
    return f > r;
}
bool isFull(){
    return r == size - 1;
}
void Enq(int element){
    if (isFull()){
        cout << "\nQueue Full\n";
    } else {
        r++;
        queue[r] = element;
    }
}
void Deq(){
    if (isEmpty()){
        cout << "\nQueue Empty\n";
    } else {
        f++;
    }
}
void displayFrontAndRear(){
    if (isEmpty()){
        cout << "Queue is Empty\n";
    } else {
        cout << "Front element: " << queue[f] << "\n";
        cout << "Rear element: " << queue[r] << "\n";
    }
}

int main(){
    Enq(10);
    Enq(20);
    Enq(30);
    displayFrontAndRear();
    Deq();
    displayFrontAndRear();
    Deq();
    Deq();
    displayFrontAndRear();
    return 0;
}
