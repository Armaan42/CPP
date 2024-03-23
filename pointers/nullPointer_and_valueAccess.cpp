#include<iostream>
using namespace std;

int main(){
    int num = 5;

    // int *p = 0;
    // p = &i;

    // cout<<p<<endl;

    // cout<<endl;

    // int *q = &i;
    // cout<<q<<endl;

    int *p = &num;
    cout<<"Before : "<<num<<endl;
    (*p)++;
    cout<<"After : "<<num<<endl;

}