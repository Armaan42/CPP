#include<iostream>
using namespace std;

int main(){
    int arr[10] = {2,3,4,5};

    cout<<"Address of first memory block is : "<<&arr[0]<<endl;
    cout<<&arr[0]<<endl;

    // int s = sizeof(arr)/sizeof(arr[0]);
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;

    int i = 3;
    cout<<arr[i]<<" - "<<*(arr + i)<<endl;
    cout<<i[arr]<<" - "<<*(i + arr)<<endl;
    
    return 0;
}
