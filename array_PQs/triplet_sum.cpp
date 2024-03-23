#include<iostream>
using namespace std;

int triplet_sum(int arr[], int size,int sum){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int z = j+1;z<size;z++){
                if(arr[i] + arr[j] + arr[z] == sum){
                    cout<<"("<<arr[i]<<" , "<<arr[j]<<" , "<<arr[z]<<")"<<endl;
                }
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

    int sum;
    cout<<"Enter the sum : ";
    cin>>sum;

    triplet_sum(arr, size, sum);
}

