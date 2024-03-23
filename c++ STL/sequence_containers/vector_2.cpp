#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a(5,1); // a=name of the vector
                        //5=capacity of an vector a
                        //1=represents that initilazise every element with 1 by default its 0

    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Copied full vector a into vector last"<<endl;
    
    vector<int> last(a);
    for(int i:last){
        cout<<i<<" ";
    }
    
}