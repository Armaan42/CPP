//fibnocci series 0,1,1,2,3,5,8,13,21,.....

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the size : ";
	cin>>n;

	int a = 0,b = 1,nx ;
	cout<<a<<" "<<b<<" ";
	for(int i=0;i<=n;i++){
		nx= a+b;
		cout<<nx<<" ";

		a = b;
		b = nx;
	}
}

