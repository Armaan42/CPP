#include<iostream>
using namespace std;
// First method
int getsum(int *arr, int n){
    cout << endl << "size : " <<sizeof(arr)<<endl;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += *(arr + i);
    }
    return sum;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<" Sum is "<< getsum(arr+3,2) <<endl;
}
