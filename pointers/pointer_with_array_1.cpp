#include<iostream>
using namespace std;

int main(){
    int arr[10] = {23,1,2,3,4,5,6};
    cout<<"Address of first memory block : "<< arr <<endl;
    cout<<"Address of first memory block : "<< &arr[1] <<endl;

    cout<<"size : "<<sizeof(arr)/sizeof(arr[0])<<endl;

    // * means value at that address
    cout<<*arr<<endl;
    //this gives the value of first memory block of the array.
    cout<<*arr + 1<<endl;
    //this gives the first location of the array.
    cout<<*(arr + 1)<<endl;
    //this gives the value at first index of the array.
    cout<<(*arr) + 1 <<endl;
    //this gives the first location of the array.

    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    for(int i=0; i<10; i++){
        cout<<*(arr+i)<<" ";
    }
    
    for(int i=0; i<10; i++){
        cout<<i[arr]<<" ";
    }

    return 0;
}

/* 
    arr[i] = *( arr + i ) they prints the same output
*/