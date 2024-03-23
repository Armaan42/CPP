#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(2);
    //same element in the set are only commends at once
    for(auto i:s){
        cout<<i<<" ";
    }

    s.erase(s.begin());

    cout<<endl;
    cout<<"After erasing"<<endl;

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"element count(?) present or not : "<<s.count(2)<<endl; //count tell us that element present or not
}