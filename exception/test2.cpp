#include<iostream>
using namespace std;
int main(){

    int a =10,b=0,c=0;
    try{

        if(b==0){
            throw "Can not divide by zero";
        }
        c = a /b;
        cout<<c<<endl;
        
      
        
    }
      catch(const char *e){
            cout<<e<<endl;
        }

}