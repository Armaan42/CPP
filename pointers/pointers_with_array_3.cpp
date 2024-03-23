#include<iostream>
using namespace std;

int main(){
    int arr[10];

    //ERROR 
    //arr = arr + 1 -> This statement will throw error

    int *ptr = &arr[0];
    cout<<ptr<<endl;

    ptr = ptr + 1;
    cout<<ptr<<endl;

}

