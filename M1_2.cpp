//Write a program to input 10 numbers in an array and display them.
#include <iostream>
using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}
