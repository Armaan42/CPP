#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity : "<<v.capacity()<<endl;

    cout<<"size : "<<v.size()<<endl; //size tell us the total number of element
    //Capacity tell us the how much space is assigned for elements

    cout<<"Element at 2 index : "<<v.at(2)<<endl;
    cout<<"First element : "<<v.front()<<endl;
    cout<<"Last element : "<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }

    cout<<"Before clearing : "<<v.size()<<endl;
    v.clear();
    cout<<"After clearing : "<<v.size()<<endl;
}

