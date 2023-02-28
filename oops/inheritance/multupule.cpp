#include<iostream>
using namespace std;

class Fruit{

    public:

    int price;
    char fName[20];

    void getFruit(){

        cout<<"\n get fruit function callled...";
    }

};

class Apple:public Fruit{

    public:

    void getApple(){

        cout<<"\n enter fruit name and price: ";
        cin>>fName>>price;

    }

    void printApple(){

        cout<<"\n fruit name: "<<fName;
        cout<<"\n fruit price: "<<price;
    }

};

class Orange:public Fruit{

    public:

    void getOrange(){

        cout<<"\n enter fruit name and price: ";
        cin>>fName>>price;

    }

    void printOrange(){

        cout<<"\n fruit name: "<<fName;
        cout<<"\n fruit price: "<<price;
    }

};


int main(){


    Apple a;
    a.getApple();
    a.printApple();

    Orange o;
    o.getOrange();
    o.printOrange();



}