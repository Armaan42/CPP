#include<iostream>
using namespace std;

int push(int size, int stack, int top){
    int p;
    if(top == size-1){
        cout<<"Overflow"<<endl;
    }
    else{
        cout<<"Enter the element to be pushed : ";
        cin>>p;
        top++;
        stack[top] = p;
    }
}

int main(){
    int size;
    cout<<"Enter the size of an array : "<<endl;
    cin>>size;

    int stack[size];

    int top = -1;

    cout<<push(size,stack,top)<<endl;
}

