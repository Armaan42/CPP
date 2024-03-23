// find First and last position of an element in sorted array.

#include<iostream>
using namespace std;

int first_occurrence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    int ans = -1;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        
        else if(key > arr[mid]){
             start = mid + 1;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }

        mid = (start + end)/2;
    }
    return ans;
}

int last_occurrence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    int ans = -1;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        
        else if(key > arr[mid]){
             start = mid + 1;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }

        mid = (start + end)/2;
    }
    return ans;
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
    cout<<"Enter the key to be seached : ";
    cin>>key;

    int found_first = first_occurrence(arr, size, key);
    int found_last = last_occurrence(arr, size, key);

    cout<<"First occurence of "<<key<<" is at "<<found_first<<endl;
    cout<<"Last occurence of "<<key<<" is at "<<found_last<<endl;

}