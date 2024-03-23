#include<iostream>
#include<climits>
using namespace std;

int getmax(int arr[], int size){
	int max = INT_MIN;
	for(int i=0;i<size;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	//returning maximum value
	return max;
}

int getmin(int arr[], int size){
	int min = INT_MAX;
	for(int i=0;i<size;i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	//returning minimum value
	return min;
}

int main(){
	int size;
	cout<<"Enter the size of an array : ";
	cin>>size;
	
	//array declaration with data type
	int arr[size];

	for(int i=0;i<size;i++){
		cout<<"Enter the "<<i<<" element of an array : ";
		cin>>arr[i]; //receiving array from user
	}

	cout<<"Maximum : "<<getmax(arr, size)<<endl; 
	cout<<"Minimum : "<<getmin(arr, size)<<endl; 

	return 0;
}
