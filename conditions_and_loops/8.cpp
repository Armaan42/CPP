//palindrome number for 32-bit integers

#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n;
	cin>>n;

	int rem,ans=0;

	while(n>0){
		rem = n%10;
		if((ans>INT_MAX/10)||(ans<INT_MAX/10)){
			return 0;
		}
		ans = (ans*10) + rem;
		n = n/10;
	}
	cout<<ans<<endl;
}






