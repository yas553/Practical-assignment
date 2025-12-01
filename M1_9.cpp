//Write a program to copy elements of one array into another.
#include <iostream>
using namespace std;
int main(){
    int arr[10], arr2[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        arr2[i] = arr[i];
    }
    for(int i=0;i<10;i++){
        cout<<arr2[i]<<"\n";
    }
    return 0;
}
