#include<iostream>
using namespace std;

int main(){
	int s,i;
	cout<<"Enter the size of an array : ";
	cin>>s;

	int arr[s];

	for(i=0;i<s;i++){
		cout<<"enter the "<<i<<" of an array : ";
		cin>>arr[i];
	}

	int a;
	cout<<"enter the array element to be searched : ";
	cin>>a;

	for(i=0;i<s;i++){
		if(arr[i] == a){
			cout<<"Index of element is "<<i<<endl;
		}
	}
	cout<<"Not present";
	return 0;
}

