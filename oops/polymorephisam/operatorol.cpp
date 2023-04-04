#include<iostream>
using namespace std;
class Test{
    
    public:
    void operator --(){
        cout<<"\n ++ operator overloaded";
        //logic
    }

};


int main(){

    Test t;
    //increment operator overloaded
    ++t;


}
