#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;

    int count = 0;

    for(int i=0;i<s.length();i++){
        if(s[i] == " "){
            s[i] = '\0';
        }
        else{
            s[count++] = s[i];
        }
    }
}