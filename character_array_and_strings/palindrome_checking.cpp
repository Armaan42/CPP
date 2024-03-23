#include<iostream>
using namespace std;

bool checkPalindrome(char name[], int len){
    for(int i=0; i<len; i++){
        if(name[i] == name[len-1]){
            return true;
        }
        else{
            return false;
        }
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i=0; i<name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"Enter the string : ";
    cin>>name;

    int len = getLength(name);

    cout<<"Length : "<<len<<endl;
    cout<<"Palindrome or not ? : "<<checkPalindrome(name, len);
    
}
