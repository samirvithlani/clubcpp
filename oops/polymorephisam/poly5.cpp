#include<iostream>
using namespace std;

class RBI{

public:

    virtual void withdraw()=0;

};
class SBI:public RBI{

public:
    void withdraw(){
        cout<<"SBI withdraw"<<endl;
    }
};


class HDFC:public RBI{

public:
    void withdraw(){
        cout<<"HDFC withdraw"<<endl;
    }
};

int main(){

    RBI *r;
    SBI s;
    r = &s;
    r->withdraw();
   
    HDFC h;
    r = &h;
    r->withdraw();

}