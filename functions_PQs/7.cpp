//checking for pythagores triplet

#include<iostream>
using namespace std;

int main(){
	int a,b,c,g;
	cout<<"Enter three numbers(a,b,c) : ";
	cin>>a>>b>>c;

	if(a>b && a>c){
		g = a;
	}
	else if(b>a && b>c){
		g = b;
	}
	else if(c>a && c>b){
		g = c;
	}
	else{
		cout<<"Error"<<endl;
	}
	cout<<"Greater number:"<<g<<endl;

	return 0;
}