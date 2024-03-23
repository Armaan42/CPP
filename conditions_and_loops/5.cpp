//print all the number form -n to n except 0 

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the upper bound : ";
	cin>>n;

	for(int i=(-n);i<=n;i++){
		if(i==0){
			continue;
		}
		else{
			cout<<i<<endl;
		}
	}
	return 0;
}

