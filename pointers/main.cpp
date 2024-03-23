#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout<<"Entered number : "<<num<<endl;

    //To find the address of operator we use &(Ampersand)
    cout<<"Address of num  : "<<&num<<endl;

    /*So the address of variable (num) in this case i.e., 0x61ff0c is 
    stored by pointer 
    */

   int *p1 = &num;
   cout<<"Address of num : "<<p1<<endl;
   cout<<"Value : "<<*p1<<endl;
    cout<<"size : "<<sizeof(num)<<endl;
    cout<<"size : "<<sizeof(p1)<<endl;


    cout<<endl;
   //Double datatype
   double d = 4.3;
   double *p2 = &d;
   cout<<"Address of double datatype : "<<p2<<endl;
   cout<<"Value : "<<*p2<<endl;
    cout<<"size : "<<sizeof(d)<<endl;
    cout<<"size : "<<sizeof(p2)<<endl;

    cout<<endl;
   //char datatype
   char c = 'a';
   char *p3 = &c;
   cout<<"Address of char datatype : "<<p3<<endl;
   cout<<"Value : "<<*p3<<endl;
    cout<<"size : "<<sizeof(c)<<endl;
    cout<<"size : "<<sizeof(p3)<<endl;
   
}