//Write a program to implement hashing with linear probing.
#include <iostream>
using namespace std;
void insertLinear(int hashTable[],int size,int value){
    int index=value%size;
    int start=index;
    while(hashTable[index]!=-1){
        index=(index+1)%size;
        if(index==start){
            cout<<"Hash table full\n";
            return;
        }
    }
    hashTable[index]=value;
}
void display(int hashTable[],int size){
    cout<<"Hash Table: ";
    for(int i=0;i<size;i++){
        cout<<hashTable[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int size,n,value;
    cout<<"Enter hash table size: ";
    cin>>size;
    int hashTable[100];
    for(int i=0;i<size;i++) hashTable[i]=-1;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>value;
        insertLinear(hashTable,size,value);
    }
    display(hashTable,size);
    return 0;
}
