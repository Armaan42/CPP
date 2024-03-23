#include<iostream>
using namespace std;

int main(){
	int money;
	cout<<"Enter you money in pocket : ";
	cin>>money;

	if(money>=5000){
		if(money>=10000){
			cout<<"trip_to_kedarnath_with_neha";
		}
		else{
			cout<<"trip_to_vashino_devi_with_neha";
		}
	}
	else if(money>=2000){
		cout<<"Date_with_rashmi";
	}
	else{
		cout<<"Date_with_friends";
	}

	return 0;
}

