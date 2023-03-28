#include<iostream>
using namespace std;

class Base{

    public:

   
    void fun(){
        cout<<"Base fun"<<endl;
    }

};
class Derived:public Base{

public:

    void fun(){
        cout<<"Derived fun"<<endl;
    }
};


int main(){

//polymorphic object / pointer
//parent class reference and child classs object 
    // Derived d;
    // d.fun();

    Base *b;//object * this is pointer //reference...
    Derived d;//this is an object....
    b = &d;
    b->fun(); //-> this pointer...


}