#include<iostream>
using namespace std;

class Test{

int y = 200;
public:
    int x=100;

    void display(){
        cout<<"\n display function called....";
    }

    //defination of function
    void print();

};

//body of function
//:: -> scope resolution operator
void Test :: print(){
    cout<<"\n value of y = "<<y;
    cout<<"\n value of x = "<<x;
}

int main(){


    //we need to create an object of Test class
    //class name space obj name
    Test t1;
    cout<<"\n value of x = "<<t1.x;
    t1.display();
    t1.print();


}