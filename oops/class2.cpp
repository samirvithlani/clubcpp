#include<iostream>
using namespace std;


class Student{

    public:
    int roll;
    char name[20];

    void getDetail();
    void printDetail();
};

void Student :: getDetail(){
    cout<<"\n Enter roll no: ";
    cin>>roll;
    cout<<"\n Enter name: ";
    cin>>name;
}
void Student :: printDetail(){
    cout<<"\n Roll no: "<<roll;
    cout<<"\n Name: "<<name;
}



int main(){


    Student s;
    s.getDetail();
    s.printDetail();


}