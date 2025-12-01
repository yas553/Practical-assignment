// Write a program to find the sum of all elements in a 1D array.
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5},sum=0;
    for(int i =0;i<5; i++){
        sum+=arr[i];
    }
    cout<<"The sum is : "<<sum<<"\n";
    return 0;
}