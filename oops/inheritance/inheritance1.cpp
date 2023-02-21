#include<iostream>
using namespace std;

class Vehicle{

    public:
    int wheels;
    char vehName[20];

};
class Car : public Vehicle{

    public:
    void getCarData(){
        cout<<"\n enter car name";
        cin>>vehName;
        cout<<"\n enter vehicle wheels";
        cin>>wheels;
    }

    void showCarData();
};

void Car :: showCarData(){
    cout<<"\n car name is "<<vehName;
    cout<<"\n car wheels are "<<wheels;
}




int main(){

    Car c;
    c.getCarData();
    c.showCarData();


}