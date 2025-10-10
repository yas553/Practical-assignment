#include <iostream>
using namespace std;
int main() 
{
    int arr[10]={1,2,3,4,5};
    int n=5,pos,value;
    cout<<"Enter position (1-10):";
    cin>>pos;
    cout<<"Enter value: ";
    cin>>value;

    for(int i=n;i>=pos;i--) 
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    n++;

    cout<<"Array after insertion:";
    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}
