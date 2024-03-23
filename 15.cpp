#include<iostream>
using namespace std;

int c = 10;
int main(){
	int a,b;
	cout<<"Enter the numbers(a,b):";
	cin>>a>>b;

	int c = a+b;
	cout<<"The sum is "<<c<<endl;
	cout<<"The global variable is "<<::c<<endl;

	return 0;
}

//  :: -> scope resolution operator