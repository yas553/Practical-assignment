//Write a program to insert an element at a specific position in a 1D array.
#include <iostream>
using namespace std;
int main(){
    int arr[11], n=10, p, Num;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>p>>Num;
    for(int i=n; i>p; i--){
        arr[i]=arr[i-1];
    }
    arr[p]=Num;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}
