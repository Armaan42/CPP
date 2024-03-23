//write a program to find maximum between two numbers

#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter three numbers(a,b,c) : ";
	cin>>a>>b>>c;

	if(a>b && a>c){
		cout<<a<<endl;
	}
	else if(b>a && b>c){
		cout<<b<<endl;
	}
	else if(c>a && c>b){
		cout<<c<<endl;
	}
	else{
		cout<<"Error"<<endl;
	}
	return 0;
}