#include<iostream>
using namespace std;

void update(int **ptr2){
    //ptr2 = ptr2 + 1;
    //kush change hoga -> No

    //*ptr2 = *ptr2 + 1;
    //kush change hoga -> Yes

    **ptr2 = **ptr2 + 1;
    //kush change hoga -> Yes
}

int main(){
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout<<"Before "<<i <<endl;
    cout<<"Before "<<ptr <<endl;
    cout<<"Before "<<ptr2 <<endl;

    update(ptr2);
    cout<<endl;
    cout<<"After "<<i <<endl;
    cout<<"After "<<ptr <<endl;
    cout<<"After "<<ptr2 <<endl;

    return 0;
}

