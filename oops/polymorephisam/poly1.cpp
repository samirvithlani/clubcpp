#include<iostream>
using namespace std;

class Shape{

public:

    void getArea(int a, int b){
        cout<<"Area of Rectangle is: "<<a*b<<endl;
    }
    void getArea(float r){
        cout<<"Area of Circle is: "<<3.14*r*r<<endl;
    }
    void getArea(int a){
        cout<<"Area of Square is: "<<a*a<<endl;
    }
    void getArea(int a, int b, int c){
        cout<<"Area of Triangle is: "<<0.5*a*b<<endl;
    }


};

int main(){


    Shape s;
    s.getArea(5.90f);
    s.getArea(5,6);


}