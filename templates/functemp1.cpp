#include<iostream>
#include<string>
using namespace std;

template<typename T> 
void demo(T a,T b,int y,string s){

    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
    cout<<"value of y ="<<y;

}


// void test(int x){

//     cout<<"Value of x is "<<x<<endl;

// }

int main(){

    //demo(5);
    //demo("Hello World");
    //demo(12.34f);
    //demo(12,33);
    //demo("a","b");
    demo(10,100,100,"ok");
 //   test(100);
}
