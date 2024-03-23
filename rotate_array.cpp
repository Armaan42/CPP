#include<iostream>
using namespace std;

void rotateArray(int arr[], int size, int key){
    int temp[size];
    int k = 0;

    for(int i=key;i<size;i++){
        temp[k] = arr[i];
        k++;
    }

    for(int i=0;i<key;i++){
        temp[k] = arr[i];
        k++;
    }

    for(int i=0;i<size;i++){
        arr[i] = temp[i];
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

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the index from where you want to rotate the array: ";
    cin>>key;

    rotateArray(arr, size, key);
    printArray(arr,size);
}