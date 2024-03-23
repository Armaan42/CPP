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

void PrintSum(int arr[][3], int m, int n){
    for(int m=0;m<3;m++){
        int sum = 0;
        for(int n=0;n<3;n++){
            sum += arr[m][n];
        }
        cout<<sum<<endl;
    }
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
    cout<<endl;
    PrintSum(arr,3,3);
    return 0;
}