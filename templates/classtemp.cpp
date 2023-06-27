#include<iostream>
using namespace std;

template <class T>
class Test{

    public:
    void display(T x){
        cout<<"The value of x is "<<x<<endl;
    }

};

int main(){


    Test <int>t;
    Test <float>t1;
    Test<string>s;
    t.display(12.78);
    t1.display(2.3);
    s.display("Hello");
    s.display(12);

}