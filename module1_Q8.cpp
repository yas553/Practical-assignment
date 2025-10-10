#include <iostream>
using namespace std;
int main() 
{
    int arr[6]={2, 5, 7, 8, 10, 13};
    int even=0;
    int odd=0;

    for(int i=0;i<6;i++) 
    {
        if(arr[i]%2==0)
        { 
            even++;
        }
        else odd++;
    }
    cout<<"Even numbers ="<<even<<endl;
    cout<<"Odd numbers ="<<odd;
    return 0;
}
