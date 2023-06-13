#include<iostream>

using namespace std;

class Calc{

    public:
    int x=100;
    //public?
    void add(int a,int b){

        cout<<"x = "<<x;
        cout<<"\n Sum is "<<a+b<<endl;
    }

    void getData();
    friend void sum(Calc c);

};

//funciton belongs to class // body outside class
void Calc :: getData(){
    
        cout<<"x = "<<x;
}

void sum(Calc c){

    cout<<"\n friend fucnction x = "<<c.x; //error
}

int main()
{

    Calc c;
    c.add(12,33);
    c.getData();

    sum(c);



}