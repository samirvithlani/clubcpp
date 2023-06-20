#include<iostream>
using namespace std;

int main(){

    //
    int x =100;
    int *p;
    p = &x; // p points to x
    cout<<"value of x: "<<x<<endl;
    cout<<"address of x ="<<&x<<endl;
    cout<<"value of p: "<<p<<endl;
    cout<<"value of p: "<<*p<<endl;
    cout<<"address of p ="<<&p<<endl;

    //pointer with arithmatic
    cout<<"value of p+1: "<<p+1<<endl;
    
    cout<<"value of p+2: "<<p+2<<endl;
    


}