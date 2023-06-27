#include<iostream>

using namespace std;

int main(){

    try{

        throw "ok";
    }
    catch(const char *e){
        cout<<"char exp";
    }
    catch(...){
        cout<<"all exp";
    }

    
}
