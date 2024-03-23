//Take 10 integer inputs from user and store them in an array and print them on screen.

#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Enter the size of an array : ";
	cin>>a;

	int arr[a];

	for(int i=0;i<a;i++){
		cout<<"Enter the "<<i<<" element of an array : ";
		cin>>arr[i];
	}

	for(int i=0;i<a;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}