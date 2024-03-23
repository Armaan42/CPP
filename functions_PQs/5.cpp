//calculate the nCr

#include<iostream>
using namespace std;

int fact(int n){
	int j = 1;
	for(int i=1;i<=n;i++){
		j = j * i;
	}
	return j;
}

int main(){
	int n,r;
	cout<<"Enter the value of (n,r) : ";
	cin>>n>>r;

	int nCr = fact(n)/((fact(r)*fact(n-r)));
	cout<<nCr<<endl;

	return 0;
}

