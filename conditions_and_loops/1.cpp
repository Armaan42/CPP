#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the size of an array : ";
	cin>>n;

	int arr[n];
	int sum = 0;
	
	for(int i=1;i<=n;i++){
		cout<<i<<" "<<endl;
		sum = sum + i;
	}
	cout<<"sum:"<<sum;
	return 0;
}