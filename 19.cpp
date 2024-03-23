#include<iostream>
using namespace std;

int binarysearch(int arr[], int a,int key){
	int s=0;
	int l=a;
	
	while(s<=l){
		int mid = (s+l)/2;

		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid] > key){
			l = mid - 1;
		}
		else{
			s = mid + 1;
		}
	}
	return -1;
}


int main(){
	int a,i;
	cout<<"Enter the size of an array : ";
	cin>>a;

	int arr[a];

	for( i=0;i<a;i++){
		cout<<"Enter the "<<i<<" element of an array : ";
		cin>>arr[i];
	}

	int key;
	cout<<"Enter the element to be searched : ";
	cin>>key;

	cout<<binarysearch(arr, a, key);
	return 0;
}




