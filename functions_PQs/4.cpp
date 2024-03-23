//program to find the factorial of a number

#include<iostream>
using namespace std;

int factorial(int n){
	int j=1;
	for(int i=1;i<=n;i++){
		j = j*i;
	}
	return j;
}


int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;

	int fact = factorial(n);
	cout<<"Factorial:"<<fact<<endl;
	return 0;
}

