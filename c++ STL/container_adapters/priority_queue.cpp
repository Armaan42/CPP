#include<iostream>
#include<queue>
using namespace std;

int main(){
    //max heap
    priority_queue<int> maxi; //by defualt its max heap whenever we fetch it gave us  the maximum element

    //min heap
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(4);
    maxi.push(0);
    maxi.push(3);

    int n = maxi.size();
    
    cout<<"size : "<<maxi.size()<<endl;
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    cout<<"empty or not : "<<mini.empty()<<endl; //output is 1 
    
    mini.push(1);
    mini.push(2);
    mini.push(4);
    mini.push(0);
    mini.push(3);

    int m = mini.size();
    
    cout<<"size : "<<mini.size()<<endl;
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"empty or not : "<<mini.empty()<<endl; //output is 1 
}