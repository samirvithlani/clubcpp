#include<iostream>
using namespace std;

class Color{

    public:
    Color(int r,int w,int g){
        cout<<"\n parameterized constructor called..."<<r;
    }
    Color(){
        cout<<"\n default constructor called...";
    }
    
};

int main()
{
    Color c1;
    Color c(100,200,200);
    
}