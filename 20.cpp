#include<iostream>
using namespace std;

void deletion_array(int arr[], int size, int pos){

	for(int i=size-2; i>=pos ;i--){
		arr[i+2] = arr[i];
	}
	arr[pos] = pos;
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

	// int key;
	// cout<<"Enter the element to be inserted : ";
	// cin>>key;

	deletion_array(arr, size, pos);

	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

