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
	int n;
	cout<<"Enter the number : ";
	cin>>n;

	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<fact(i)/((fact(j)*fact(i-j)))<<" ";
		}
		cout<<endl;
	}
	return 0;
}