#include<iostream>
using namespace std;

int uniqueElement(int arr[], int size, int ans){
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;
    int ans = 0;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int get = uniqueElement(arr, size, ans);

    cout<<get<<endl;
}

