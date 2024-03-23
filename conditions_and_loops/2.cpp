#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the size : ";
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++){
		cout<<"Enter the "<<i<<" element of an array : ";
		cin>>arr[i];
	}

	//int sum = 0;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<=i;j++){
			cout<<arr[j]<<" ";
			sum = sum + arr[j];
		}
		cout<<":"<<sum<<endl;
	}
	return 0;
}

