#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int brr[5] = {5,4,3,2,1};

    int result[5];

    for(int i=0;i<5;i++){
        result[i] = arr[i] + brr[i];
    }

    for(int i=0;i<5;i++){
        cout<<result[i]<<" ";
    }

}