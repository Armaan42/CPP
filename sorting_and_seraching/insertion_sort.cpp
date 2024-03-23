#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int j;
    for(int i=1; i<size; i++){
        int current = arr[i];
        for(j=i-1; j>=0; j--){
            
            if(arr[j] > current){
                //shift
                arr[j+1] = arr[j];
            }
            else{
                break; //break out of the loop
            }
        }
        arr[j+1] = current; //while comparing our (j) is one 
    }                      //less index where we need to put  the element.

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}