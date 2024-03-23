#include<iostream>
using namespace std;

int main(){
	char button;
	cout<<"Enter the character : ";
	cin>>button;

	switch(button){
		case 'a':
			cout<<"English - Hello"<<endl;
			break;

		case 'b':
			cout<<"German - Hola"<<endl;
			break;

		case 'c':
			cout<<"Hindi - Namaste"<<endl;
			break;

		case 'd':
			cout<<"Spainsh - Ciao"<<endl;
			break;

		default:
			cout<<"Still_learning"<<endl;
			break;
	}
	return 0;
}