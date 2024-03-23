//Take 10 integer inputs from user and store them in an array. Again ask user to give a number. Now, tell user whether that number is present in array or not.

#include<iostream>
using namespace std;

int search(int arr[],int a,int key){
	for(int i=0;i<a;i++){
		if(arr[i] == key){
			return i;
		}
	}
	return -1;
}

int main(){
	int a,i;
	cout<<"Enter the size of an array : ";
	cin>>a;

	int arr[a];

	for(i=0;i<a;i++){
		cout<<"Enter the "<<i<<" element of an array : ";
		cin>>arr[i];
	}

	int key;
	cout<<"Enter the element to be searched : ";
	cin>>key;

	cout<<search(arr, a, key)<<endl;
	return 0;
}
