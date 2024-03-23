//Prime_number or not

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;

	if(n==2){
		cout<<"prime"<<endl;
		exit(0);
	}
	int count=0;
	for(int i=2;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==1){
		cout<<"Prime"<<endl;
	}
	else{
		cout<<"Not Prime"<<endl;
	}
}

