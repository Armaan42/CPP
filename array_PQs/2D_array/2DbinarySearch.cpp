#include<iostream>
using namespace std;

bool binarySearch(int arr[][3], int key, int row, int col){
    int start = 0;
    int end = (row * col) - 1;
    int mid = start + (end-start)/2;

   while(start <= end){
        int c = mid/col;
        int r = mid%col;
        int element = arr[c][r];
        if(element == key){
            return true;
        }

        if(key > element){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid = (start + end )/2;
    }

    return false;
     
}

int main(){
    int arr[3][3];
    int row;
    int col;
    for( row=0;row<3;row++){
        for( col=0;col<3;col++){
            cout<<"("<<row<<" , "<<col<<")"<<" : ";
            cin>>arr[row][col];
        }
    }

    for( row=0;row<3;row++){
        for( col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    int key;
    cout<<"Enter the  key to be searched : ";
    cin>>key;

    if(binarySearch(arr,key,3,3)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}

