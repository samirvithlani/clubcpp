#include<iostream>
using namespace std;

class B;
class A{

public:

    int p = 100;
    friend void add(A a,B b);

};

class B{

        int q = 200;
        friend void add(A a,B b);

};

void add(A a,B b){

    int c = a.p + b.q;
    cout<<"\n Sum is "<<c;

}
int main(){

    A a;
    B b;
    add(a,b);
}