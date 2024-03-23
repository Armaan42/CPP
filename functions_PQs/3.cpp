//Write a program to print the fibnocci series

#include<iostream>
using namespace std;

void fibnocci(int n){
	int t1=0,t2=1,nt;
	
	for(int i=1;i<=n;i++){
		cout<<t1<<endl;
		nt = t1+t2;
		t1 = t2;
		t2 = nt;
	}	
	return;
}

int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;

	fibnocci(n);
	return 0;
}

