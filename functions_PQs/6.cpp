//print the sum of first n natrual numbers

#include<iostream>
using namespace std;

int sum(int a){
	int sum = 0;
	for(int i=1;i<=a;i++){
		sum += i;
	}
	return sum;
}

int main(){
	int a;
	cout<<"Enter the number : ";
	cin>>a;

	int ans = sum(a);
	cout<<"Sum:"<<ans<<endl;
}