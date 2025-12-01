//Write a program to input a 2D array (3x3) and display it in matrix form.
#include <iostream>
using namespace std;
int main(){
    int arr[3][3];
    cout<<"Enter matrix : \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\nThe matrix is : \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
