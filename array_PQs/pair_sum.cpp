#include<iostream>
using namespace std;

int pair_sum(int arr[], int size, int sum){
    int i,j;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i] + arr[j] == sum){
                cout<<"("<<arr[i]<<" , "<<arr[j]<<")"<<endl;
            }
        }
    }
}


int main(){
    int size;
    cout<<"enter the size of an array : ";
    cin>>size;

    int arr[size];

    int sum ;
    cout<<"Enter the  sum : ";
    cin>>sum;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<pair_sum(arr,size,sum);
}










