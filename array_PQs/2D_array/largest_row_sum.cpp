#include<iostream>
#include<climits>
using namespace std;

void PrintSum(int arr[][3], int m, int n){

    cout<<"Sum of each rows given below "<<endl;
    for(int m=0;m<3;m++){
        int sum = 0;
        for(int n=0;n<3;n++){
            sum += arr[m][n];
        }
        cout<<m+1<<" : "<<sum<<endl;
    }
}

int printLargestRowSum(int arr[][3], int m, int n){
    int max = INT_MIN;
    cout<<"Maximum row sum"<<endl;
    for(int m=0;m<3;m++){
        int sum = 0;
        for(int n=0;n<3;n++){
            sum += arr[m][n];
        }
        if(sum > max){
            max = sum;
        }
    }
    cout<<"rowindex : "<<m<<endl;
    cout<<"sum : "<<max<<endl;
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

    cout<<endl;
    PrintSum(arr,3,3);

    cout<<endl;
    printLargestRowSum(arr,3,3);

    return 0;
}