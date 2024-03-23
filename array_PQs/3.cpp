/*
Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0.*/

#include<iostream>
using namespace std;

int main(){
	int n,pn=0,nn=0,on=0,en=0,z=0;

	cin>>n;

	int arr[n];

	int i;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}

	if(arr[i]==0){
		z++;
	}
	else if(arr[i]>0){
		pn++;
	}
	else if(arr[i]<0){
		nn++;
	}
	else if(arr[i]%2==0){
		en++;
	}
	else if(arr[i]%2==1){
		on++;
	}
	else{
		cout<<"Error";
	}

	cout<<"positive"<<pn<<"Negative"<<nn<<"odd"<<on<<"even"<<en<<"Zero"<<z<<endl;
	return 0;
}