#include<iostream>
#include <math.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int answer = 0,i=0;
	while(n!=0){
		int bit = n%10;
		if(bit == 1){
			answer = answer + pow(2,i);
		}
		n  = n/10;
		i++;
	}
	cout<<answer<<endl;
}

