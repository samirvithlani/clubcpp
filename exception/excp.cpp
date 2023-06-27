#include<iostream>
using namespace std;

int main(){

    int x = -1;
    try{
        if(x<0){
            throw x;
        }
        else{
            cout<<"No exception"<<endl;
        }
    }
    catch(int e){
        cout<<"Exception caught"<<e<<endl;
    }
}