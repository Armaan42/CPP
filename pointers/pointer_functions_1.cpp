#include<iostream>
using namespace std;

void print(int *p){
    cout<< p << endl; 
}

void update(int *p){
    p = p + 1;
}
int main(){
    int  value = 5;
    int *p = &value;

    // print(p);
    cout<<"before : "<< p <<endl;
    update(p);
    cout<<"After : "<< p <<endl;

    return 0;
}

//Here code gives the same value before and after because firstly
//you call the value and then update it put your are printing the
//previous value of p that is why it giving you the address of same
//memory block.