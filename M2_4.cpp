//Write a program to implement a queue using arrays (enqueue and dequeue).
#include <iostream>
using namespace std;
const int size=10;
int que[size];
int f=0;
int r=-1;
void display(){
    if (f>r){
        cout<<"queue is Empty\n";
        return;
    }
    cout<<"Elements in queue are : ";
    for (int i=f;i<=r;i++){
        cout<<que[i]<<" ";
    }
    cout<<"\n";
}
void Enq(int element){
    if (r==size-1)
        cout<<"\nqueue Full\n";
    else
    {
        r++;
        que[r]=element;
    }
}
void Deq(){
    if (f>r){
        cout<<"\nqueue Empty\n";
    }
    else{
        f++;
    }
    if (f>r){
        f=0;
        r=-1;
    }
}
int main(){
    Enq(1);
    Enq(87);
    Enq(43);
    Enq(9);
    Enq(0);
    Enq(54);
    display();
    Deq();
    display();
    Deq();
    Deq();
    Deq();
    Deq();
    display();
    Enq(85);
    Enq(15);
    display();
    return 0;
}