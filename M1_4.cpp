//Write a program to find the maximum and minimum element in an array.
#include <iostream>
using namespace std;
int main(){
    int arr[10],max,min;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    max=min=arr[0];
    for(int i=1;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Max: "<<max<<"\n";
    cout<<"Min: "<<min<<"\n";
    return 0;
}