#include<iostream>
#include <math.h>
using namespace std;

int main(){
	int a;
	cout<<"Enter the number : ";
	cin>>a;

	int sum=0;
	int original_a = a; 

	while(a>0){
		int l_d = a%10;
		sum += pow(l_d,3);
		a = a/10;
	}

	if(sum == original_a){
		cout<<"Armstrong_number"<<endl;
	}
	else{
		cout<<"Non_Armstrong_number"<<endl;
	}
	return 0;
}



















