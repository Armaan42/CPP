#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Enter the number : ";
	cin>>a;

	if(a>10){
		cout<<"Greater than 10"<<endl;
	}
	else if(a==10){
		cout<<"Equal to 10"<<endl;
	}
	else if(a<10){
		cout<<"Less than 10"<<endl;
	}
	else{
		cout<<"Try again"<<endl;
	}
	return 0;
}