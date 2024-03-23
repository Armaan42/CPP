//Program to write make calculator using functions

#include<iostream>
using namespace std;

int add(int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main(){
	int a,b;
	cout<<"Enter the numbers : ";
	cin>>a>>b;

	again:
	char choice;
	cout<<"Enter the choice (+,-,*,/) : ";
	cin>>choice;

	switch(choice){
		case '+':
			cout<<"Sum:"<<add(a,b)<<endl;
			break;

		case '-':
			cout<<"Subtraction:"<<sub(a,b)<<endl;
			break;

		case '*':
			cout<<"Multiplication:"<<multiply(a,b)<<endl;
			break;

		case '/':
			cout<<"Division"<<divide(a,b)<<endl;
			break;

		default:
			cout<<"Error"<<endl;
			goto again;
	}
	return 0;
}

int add(int a, int b){
	int sum = a+b;
	return sum;
}

int sub(int a, int b){
	int sub = a-b;
	return sub;
}

int multiply(int a, int b){
	int mul = a*b;
	return mul;
}

int divide(int a, int b){
	int div = a/b;
	return div;
}

