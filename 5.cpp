#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Enter the number : ";
	cin>>a;

	do{
		cin>>a;
	}
	while(a>0);
	return 0;
}