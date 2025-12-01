//Write a program to implement circular queue operations.
#include <iostream>
using namespace std;
const int size = 5;
int queu[size];
int f=-1;
int R=-1;
void display(){
    if (f==-1){
        cout<<"queue is Empty\n";
        return;
    }
    cout<<"Elements in queue are : ";
    int i=f;
    while (true){
        cout<<queu[i]<<" ";
        if(i == R){
            break;
        }
        i=(i+1)%size;
    }
    cout<<"\n";
}
void Enq(int element){
    if((f==0 && R==size-1)||(f==(R+1)%size)){
        cout<<"queue Full\n";
        return;
    }
    if(f==-1)
        f=0;

    R=(R +1)%size;
    queu[R]=element;
}
void Deq(){
    if(f==-1){
        cout<<"queuuue Empty\n";
        return;
    }
    if(f==R){
        f=-1;
        R=-1;
    }
    else{
        f=(f+1)%size;
    }
}
int main(){
	Enq(0);
	Enq(1);
	Enq(2);
	Enq(3);
	Enq(4);
	Enq(5);
    display();
    Deq();
    Enq(5);
    display();
    return 0;
}