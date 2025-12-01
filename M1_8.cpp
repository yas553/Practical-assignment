//Write a program to count even and odd numbers in an array.
#include <iostream>
using namespace std;
int main(){
    int arr[10],even=0,odd=0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        if(arr[i]%2==0)even++;
        else odd++;
    }
    cout<<"Even numbers: "<<even<<"\n";
    cout<<"Odd numbers: "<<odd<<"\n";
    return 0;
}
