#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int key, int m, int n){
    for(int m=0;m<3;m++){
        for(int n=0;n<3;n++){
            if(arr[m][n] == key){
                return m,n;
            }
        }
    }
    return 0;
}

int main(){

    int arr[3][3];

    //taking input -> row wise
    for(int m=0;m<3;m++){
        for(int n=0;n<3;n++){
            cout<<"("<<m<<" , "<<n<<")"<<" : ";
            cin>>arr[m][n];
        }
    }
/*
    //taking input -> column wise
    for(int m=0;m<j;m++){
        for(int n=0;n<i;n++){
            cout<<"("<<m<<" , "<<n<<")"<<" : ";
            cin>>arr[n][m];
        }
    }
    */

    for(int m=0;m<3;m++){
        for(int n=0;n<3;n++){
            cout<<arr[m][n]<<" ";
        }
        cout<<endl;
    }

    int key;
    cout<<"Enter the  key to be searched : ";
    cin>>key;

    if(isPresent(arr,key,3,3)){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}