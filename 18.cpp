#include<iostream>
using namespace std;


void addition_array(int arr[], int size, int pos, int key){

	for(int i=size-1; i>=pos ;i--){
		arr[i+1] = arr[i];
	}
	arr[pos] = key;
}

int main(){
	int size,i;
	cout<<"Enter the size of an array : ";
	cin>>size;

	int arr[size];

	for(i=0;i<size;i++){
		cout<<"Enter the "<<i<<" element of an array : ";
		cin>>arr[i];
	}

	int pos;
	cout<<"Enter the position of an array : ";
	cin>>pos;

	int key;
	cout<<"Enter the element to be inserted : ";
	cin>>key;

	addition_array(arr, size, pos, key);

	for(int i=0;i<size+1;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

