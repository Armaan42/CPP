#include<iostream>
#include<algorithm>
using namespace std;

string removeOccurrences(string s, char ch){
    s.erase(remove(s.begin(), s.end(), ch),s.end());

    return s;
}

int main(){
    string s = "hello my name is shilla";

    char ch;
    cout<<"Enter the substring : ";
    cin>>ch;

    string c = removeOccurrences(s,ch);
    cout<<"String : "<<c<<endl;
}
