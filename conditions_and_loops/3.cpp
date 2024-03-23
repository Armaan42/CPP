#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter the size (rows,columns) : ";
	cin>>a>>b;

	int first[a][b],second[a][b],sum[a][b];

	cout<<"First Matrix"<<endl;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<"Enter the "<<i<<" element of an array : ";
			cin>>first[a][b];
		}
	}

	cout<<"Second Matrix"<<endl;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<"Enter the "<<i<<" element of an array : ";
			cin>>second[a][b];
		}
	}

	cout<<"Sum of first and second Matrix"<<endl;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			sum[a][b] = first[a][b] + second[a][b];
		}
	}

	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<sum[a][b];
		}
	}
	return 0;
}