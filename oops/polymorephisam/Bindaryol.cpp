#include<iostream>
using namespace std;

class Demo{

    
public:
    int x;
    //second operand
    void operator +(Demo d){

        cout<<"\n instance x value = "<<x;
        cout<<"\n d.x value = "<<d.x;

    }


};
int main(){

    Demo d1;
    d1.x =100;  
    Demo d2;
    d2.x =200;
    
    d1+d2;

}