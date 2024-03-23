#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Enter the number : ";
	cin>>a;

	int counter=0;
	for(int i=2;i<=a;i++){
		if(a%i==0){
			counter++;
		}
	}

	if(counter==1){
		cout<<"prime"<<endl;
	}
	else{
		cout<<"Not_prime"<<endl;
	}

	return 0;
}

