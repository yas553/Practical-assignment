//Write a program to implement a basic hash function (modulo method).
#include <iostream>
using namespace std;
int hashFunction(int key,int size){
    return key%size;
}
int main(){
    int size,key;
    cout<<"Enter hash table size: ";
    cin>>size;
    cout<<"Enter key: ";
    cin>>key;
    int index=hashFunction(key,size);
    cout<<"Hash index: "<<index<<"\n";
    return 0;
}