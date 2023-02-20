#include<iostream>
using namespace std;

//class level variable it's default private
//private variable can not access out side of class
class Bank{

    //label
    int y=200;

    //private
    void test(){
        cout<<"\n test called...";
    }
    
    public:
    int x=100;
    //public
    void show(){
        
        test();
        cout<<"\n show called...";
        cout<<y<<endl;
    }

    //defination
    void print();
    int sum(int a, int b);
};

//:: is scope resolution operator
void Bank :: print(){
    cout<<"\n print called...";
    cout<<y<<endl;
}
int Bank :: sum(int a, int b){
    return a+b;
}



int main(){


    //create an object of class
    //class name space object name
    Bank b1;
    cout<<b1.x<<endl;
    b1.show();  
    b1.print();
    int x = b1.sum(12,25);
    cout<<"x === "<<x<<endl;


}