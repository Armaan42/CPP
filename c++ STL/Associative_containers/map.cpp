#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;

    m[1] = "armaan";
    m[2] = "singh";
    m[3] = "bhau";

    m.insert({4,"rajput"});

    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" : "<<i.second<<endl;
    }cout<<endl;

    cout<<"Element count(?) present or not : "<<m.count(3)<<endl;

    cout<<endl;
    m.erase(3);
    cout<<"After erase"<<endl;

    for(auto i:m){
        cout<<i.first<<" : "<<i.second<<endl;
    }cout<<endl;


}