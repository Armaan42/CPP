#include<iostream>
using namespace std;

int find_duplicate(int arr[],int size, int key, int count){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            count++;
        }
    }
    return count;
}

int main(){
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;

    int arr[size];
    int i;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }

    int key,count=0;
    cout<<"Enter the element to find its occurrences : ";
    cin>>key;

    int found = find_duplicate(arr,size,key,count);
    cout<<found<<endl;
}

