#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout<< arr << endl;//It will print the address of first block.

    char *c = &ch[0];
    cout<< c <<endl; //It will print the entire string.


    char temp = 'z';
    char *p = &temp;
    
    cout<< p <<endl;

    return 0;

}