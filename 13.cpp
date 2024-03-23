#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Enter the number : ";
	cin>>a;

	int reverse=0;
	while(a>0){
		int l = a%10;
		reverse = reverse*10 + l;
		a  = a/10;
	}
	cout<<"Reverse:"<<reverse<<endl;
	return 0;
}
