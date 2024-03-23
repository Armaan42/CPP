#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;  //creation of Double pointer
    cout<<"Printing ptr : "<< ptr <<endl;
    cout<<"Addrress of ptr : "<< &ptr <<endl;

    cout<<"Value at ptr : "<<*ptr2<<endl;
    cout<<endl;
    //printing the value of i
    cout<<"1st : "<<i<<endl;
    cout<<"2nd : "<<*ptr<<endl;
    cout<<"3rd : "<<**ptr2<<endl;
    cout<<endl;

    //printing the address of i
    cout<<"1st : "<<&i<<endl;
    cout<<"2nd : "<<ptr<<endl;
    cout<<"3rd : "<<*ptr2<<endl;

}