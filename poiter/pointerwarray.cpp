#include<iostream>
using namespace std;

int main(){

    int a[5]={1,2,3,4,5};
    cout<<"\n address of a ="<<&a<<endl;
    for(int i=0;i<5;i++){
        
        cout<<"\n address of i ="<<&a[i]<<endl;
    }
    // int *p;
    // p = a; 
    //pointer array
    int *p[5];

    cout<<"\n value of p ="<<p<<endl;
    cout<<"\n address of p ="<<&p<<endl;

    //copying array to another array
    for(int i=0;i<5;i++){
        p[i] = &a[i];
    }

    cout<<"\n\n\n";
    for(int i=0;i<5;i++){
        cout<<"\n value of p ="<<p[i]<<endl;
        
    }

}

