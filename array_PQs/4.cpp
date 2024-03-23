//printing the sum of element of an array

#include<iostream>
using namespace std;

int main(){
    int arr[5]; //intilizating the array

    int sum=0; //declaring the sum variable with valus 0
    
    for(int i=0;i<5;i++){
        cout<<"Enter the "<<i<<" element of an array : ";
        cin>>arr[i];

        sum = sum + arr[i]; //putting the all sum of array element in variable sum
    }
    cout<<"Sum : "<<sum<<endl; //printing the sum of all element of array
}