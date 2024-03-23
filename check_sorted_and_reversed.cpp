#include<iostream>
using namespace std;

bool sorted(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        for(int i=0;i<size;i++){
            if(arr[i] < arr[i+1]){
                return true;
            }
            else{
                return false;
            }
        }
    }
}

bool reversed(int arr[], int size){
    int start = 0;
    int end = size - 1;

    int temp[size];

    for(int i=0;i<size;i++){
        cin>>temp[i];
    }

    while(start <= end){
        for(int i=0;i<size;i++){
            if(arr[i] == temp[size-1]){
                return true;
        }
            else{
                return false;
            }
        }
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
    bool found = sorted(arr,size);
    bool reverse = reversed(arr,size);
    cout<<"sorted or not ? : "<<found<<endl;
    cout<<"reversed or not ? : "<<reverse<<endl;

}