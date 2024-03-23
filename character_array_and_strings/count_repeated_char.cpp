#include<iostream>
#include<map>
using namespace std;

void countDuplicates(string s){
    map<char,int> count;
    for(int i=0; i<s.length(); i++){
        count[s[i]]++;
    }

    for(auto i:count){
        if(i.second > 1)
        cout<<i.first<<" : "<<i.second<<endl;
    }
}

int main(){
    string s = "armaan singh bhau";
    countDuplicates(s);
}

