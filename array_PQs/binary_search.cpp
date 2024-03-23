#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start + end )/2;
    //int mid = (start + ((end - start)/2));
    // above equation by (mid) only used when the value of (int) exceeds by 2^31 - 1

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = (start + end )/2;
        //mid = (start + ((end - start)/2));
        // It is only used when the value of (int) exceeds by 2^31 - 1
    }
    return -1;
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
    cout<<"Enter the key to be searched : ";
    cin>>key;

    int found = binarySearch(arr,size,key);
    cout<<"Your key is at "<<found<<" index"<<endl;

}