#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    int key;
    cout<<"Enter the key to be searched : ";
    cin>>key;

    cout<<"Finding key : "<<binary_search(v.begin(), v.end(),key)<<endl; 
    //to search for key using binary search

    cout<<"Maximum element : "<<*max_element(v.begin(), v.end())<<endl;
    cout<<"Minimum element : "<<*min_element(v.begin(), v.end())<<endl;

    vector<int> v1 = {1,2,3};
    vector<int> v2 = {4,5,6};

    cout<<"Before Swapping"<<endl;
    cout<<"v1 : ";
    for(int i=0;i<3;i++){
        cout<<v1[i]<<" ";
    }

    cout<<endl;
    cout<<"v2 : ";
    for(int i=0;i<3;i++){
        cout<<v2[i]<<" ";
    }

    for(int i=0;i<3;i++){
        swap(v1[i], v2[i]);
    }

    cout<<endl;
    
    cout<<"After swapping"<<endl;
    cout<<"v1 : ";
    for(int i=0;i<3;i++){
        cout<<v1[i]<<" ";
    }

    cout<<endl;
    cout<<"v2 : ";
    for(int i=0;i<3;i++){
        cout<<v2[i]<<" ";
    }cout<<endl;

    string a= "abcd";
    reverse(a.begin(), a.end());
    cout<<"Reversed string : "<<a<<endl;
}