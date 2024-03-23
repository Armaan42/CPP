#include<iostream>
using namespace std;

bool earsearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i<<" element of an array : ";
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key : ";
    cin>>key;

    bool found = earsearch(arr, size, key);

    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }
}