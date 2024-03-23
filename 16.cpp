#include<iostream>
using namespace std;

int main(){
	int s,i;
	cout<<"Enter the size of an array :";
	cin>>s;

	int arr[s];

	for(i=0;i<s;i++){
		cout<<"Enter the"<<" "<<i<<" "<<"of an array :";
		cin>>arr[i];
	}
	int max=0,min=arr[i];

	for(i=0;i<s;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<<"minimum element in an array :"<<min<<endl;
	cout<<"Largest element in an array :"<<max<<endl;
	return 0;
}

