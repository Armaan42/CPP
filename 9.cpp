#include<iostream>
using namespace std;

int main(){
	float a,b;
	cout<<"Enter the numbers(a,b) : ";
	cin>>a>>b;

	int choice;
	cout<<"1:Additon\n2:Subtraction\n3:Multiplication\n4:Division"<<endl;
	cout<<"Enter the choice : ";
	cin>>choice;

	switch(choice){
		case 1:
			cout<<"Additon:"<<a+b<<endl;
			break;

		case 2:
			cout<<"Subtraction:"<<a-b<<endl;
			break;

		case 3:
			cout<<"Multiplication:"<<a*b<<endl;
			break;

		case 4:
			cout<<"Division:"<<a/b<<endl;
			break;

		default:
			cout<<"error"<<endl;
	}
	return 0;
}