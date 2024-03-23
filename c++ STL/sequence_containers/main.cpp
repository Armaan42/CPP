#include<iostream>
#include<array>

using namespace std;

int main(){
    array<int,4> a = {1,2,3,4};

    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2 index : "<<a.at(2)<<endl; //getting us the element at 2nd index
    cout<<"Empty or not : "<<a.empty()<<endl; //telling us in bool that array is empty or not
    cout<<"First element : "<<a.front()<<endl; //telling us the first element means element at 0th index
    cout<<"Last element : "<<a.back()<<endl; //telling us the last element means (size-1)th index

}