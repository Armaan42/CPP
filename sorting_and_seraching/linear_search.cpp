#include<iostream>
using namespace std;

int linearsearch(int size, int arr[], int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return i;
        }
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
    cout<<"Enter the key : ";
    cin>>key;
    
    int found = linearsearch(size, arr, key);
    cout<<"key found at "<<found<<" index"<<endl;
}