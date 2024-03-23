#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Enter the number : ";
	cin>>a;

	if(a%2==0 && a%3==0){
		cout<<"Divisible by both"<<endl;
	}
	else if(a%2==0){
		cout<<"Divisible by 2 only"<<endl;
	}
	else if(a%3==0){
		cout<<"Divisible by 3 only"<<endl;
	}
	else{
		cout<<"Divisible with none"<<endl;
	}
	return 0;
}

