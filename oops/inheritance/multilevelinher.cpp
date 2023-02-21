#include<iostream>
using namespace std;

class Gov{

public:
    int tax;

};

class State: public Gov{

    public:
    int grant;

    void getTax1(){

        cout<<"\n enter tax";
        cin>>tax;
    }

};
class City : public State{

    public:
    int income;

    void getGrant(){
            
            cout<<"\n enter grant";
            cin>>grant;
    }
    void getTax(){
        cout<<"\n enter tax";
        cin>>tax;
    }

};

int main(){


    City c;
    c.getTax1();
    c.getTax();
    c.getGrant();

}