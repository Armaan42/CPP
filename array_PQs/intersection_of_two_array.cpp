#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int brr[5] = {1,2,7,8,9};

    for(int i=0;i<5;i++){
        int element = arr[i];
        for(int j=0;j<5;j++){
            if(element == brr[j]){
                cout<<arr[i]<<endl;
                arr[j]++;
                break;
            }
        }
    }
    return 0;
}
