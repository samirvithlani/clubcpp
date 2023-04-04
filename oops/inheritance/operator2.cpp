#include<iostream>
using namespace std;

class Compare{

public:

    int x;//10
    int y;//20

    bool operator ==(Compare c){

        //c.x = 100;
        //c.y = 200;
        if(c.x == x && c.y ==y){
            return true;
        }
        return false;

    }



};

int main(){

    Compare c1;
    Compare c2;
    c1.x = 100;
    c1.y = 200;
    c2.x = 100;
    c2.y = 200;

    bool ans = c1==c2;
    //cout<<"\n ans = "<<ans;
    if(ans==1){
        cout<<"\n both are equal";
    }
    else{
        cout<<"\n both are not equal";
    }


    if(c1==c2){
        cout<<"\n both are equal....";
    }
    else{
        cout<<"\n both are not equal....";
    }





}