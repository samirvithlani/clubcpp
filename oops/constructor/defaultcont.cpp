#include<iostream>
using namespace std;

class Bank{
public:

    // Bank(){

    //     cout<<"\n default constructor called...";
    // }  
    Bank();

    void test();
};

Bank :: Bank(){

    cout<<"\n default constructor called...";
}

void Bank :: test(){
    
        cout<<"\n test method called...";
}

int main(){

    Bank b1;
    
    //b1.test();



}