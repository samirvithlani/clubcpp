#include<iostream>
using namespace std;

static int xx =200;
//non static variable 
//non static variable stores in heap memory
//static vriable
//static variable stores in stack memory
int *myfun(){
    static int a=10;
    return &xx;
}

int main(){

    int x = *myfun();
    cout<<x<<endl;

}