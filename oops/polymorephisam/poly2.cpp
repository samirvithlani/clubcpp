#include<iostream>
using namespace std;

class Order{

    public:
    void placeOrder(char name[20]){

        cout<<"\n order placed with name"<<name;
    }

    //error...
    // void placeOrder(char name1[20]){

    // }
    void placeOrder(char name[20],int price){
        cout<<"\n order placed with name an dprice"<<name<<price;
    }
    void placeOrder(char name[20],int price,float dis){

    cout<<"\n order placed with name price and dis"<<name<<price<<dis;
    }
    void placeOrder(int price,char name[20]){
    cout<<"\n order placed with price name"<<name<<price;
    }



};

int main(){

    Order o;
    o.placeOrder("sachin");
    o.placeOrder("sachin",100);
    o.placeOrder("sachin",100,10.5);
    o.placeOrder(100,"sachin");
    return 0;


}