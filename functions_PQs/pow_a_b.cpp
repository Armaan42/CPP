#include<iostream>
using namespace std;

int pow_a_b(int a,int b){
	int ans = 1;
	for(int i=1;i<=b;i++){
		ans = ans * a;
	}
	return ans;
}


int main(){
	int a,b;
	cin>>a>>b;

	int result = pow_a_b(a,b);
	cout<<"Power of "<<a<<" and "<<b<<" : "<<result<<endl;
}





