#include<iostream>
using namespace std;

void mergeArray(int arr1[], int size1,  int arr2[], int size2, int arr3[]){
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    
    while(i < size1){
        arr3[k++] = arr1[i++];
    }

    while(j < size2){
        arr3[k++] = arr2[j++];
    }
        
}

void print(int arr3[], int size3){
    cout<<"Merged Array"<<endl;
    for(int i=0;i<size3;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size1;
    cout<<"Enter the size of first array : ";
    cin>>size1;

    int arr1[size1];

    cout<<"Enter first array : ";
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }

    int size2;
    cout<<"Enter the size of second array : ";
    cin>>size2;

    int arr2[size2];

    cout<<"Enter second array : ";
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }

    int size3 = size1 + size2;
    int arr3[size3];

    mergeArray(arr1,size1 ,arr2,size2, arr3);
    print(arr3,size3);

    return 0;
}