#include<iostream>
#include<string>
using namespace std;

int getMaxOccCharacter(string s, char k){
    int n = 0;

    for(int i=0;i<s.length();i++){
        if(s[i] == k){
            n++;
        }
    }
    return n;
}

int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;

    char k;
    cout<<"Enter the key to be searched : ";
    cin>>k;

    cout<<"count : "<<getMaxOccCharacter(s,k)<<endl;
}