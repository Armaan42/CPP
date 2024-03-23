#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(2);
    s.push(3);
    s.push(4);

    cout<<"Printing top element : "<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
}