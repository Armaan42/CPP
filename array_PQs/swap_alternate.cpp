#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    swapAlternate(arr,size);
    printArray(arr,size);
}

