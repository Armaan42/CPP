#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    if(isPrime(n)){
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"not prime number"<<endl;
    }

    int n1;
    cout<<"Enter the first number : ";
    cin>>n1;

    int n2;
    cout<<"Enter the second number : ";
    cin>>n2;

    

    for(int i=n1;i<n2;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}