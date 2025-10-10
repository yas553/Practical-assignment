#include <iostream>
using namespace std;
int main() 
{
    int arr1[5]={11,22,33,44,55};
    int arr2[5];

    for(int i=0;i<5;i++) 
    {
        arr2[i]=arr1[i];
    }
    cout<<"Copied array:";
    
    for(int i=0; i<5; i++) 
    {
        cout << arr2[i] << " ";
    }
    return 0;
}
