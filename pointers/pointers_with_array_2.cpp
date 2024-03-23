#include<iostream>
using namespace std;

int main(){
    int arr[10] = {14,32,3,4,5};
    cout<<sizeof(arr)<<endl;

    int temp[10];
    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(&temp[0])<<endl;

    cout<<endl;

    int a[20] = {1,2,3,4,5};
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;

    cout<<endl;

    int *p = &a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

    return 0;
}

