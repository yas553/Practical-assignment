#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10},rev[10];
    for(int i=9;i>=0;i--){
        rev[9-i] = arr[i];
    }
    for(int i=0;i<10;i++){
        cout<<rev[i]<<"\n";
    }
    return 0;
}
