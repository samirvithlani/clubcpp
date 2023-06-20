#include<iostream>
using namespace std;

void swap(int *a,int *b){

cout<<"\n value of a  inside swap before swap ="<<*a<<endl;
cout<<"\n value of b  inside swap before swap ="<<*b<<endl;
cout<<"\n address of a  inside swap before swap ="<<a<<endl;
cout<<"\n address of b  inside swap before swap ="<<b<<endl;

    int temp = *a;
    *a = *b;
    *b = temp;

cout<<"\n value of a  inside swap after swap ="<<*a<<endl;
cout<<"\n value of b  inside swap after swap ="<<*b<<endl;
cout<<"\n address of a  inside swap after swap ="<<a<<endl;
cout<<"\n address of b  inside swap after swap ="<<b<<endl;



}


int main()
{


    int a=10,b=20;
cout<<"\n value of a  inside main before swap ="<<a<<endl;
cout<<"\n value of b  inside main before swap ="<<b<<endl;
cout<<"\n address of a  inside main before swap ="<<&a<<endl;
cout<<"\n address of b  inside mian before swap ="<<&b<<endl;

swap(&a,&b);

cout<<"\n value of a  inside main after swap ="<<a<<endl;
cout<<"\n value of b  inside main after swap ="<<b<<endl;
cout<<"\n address of a  inside main after swap ="<<&a<<endl;
cout<<"\n address of b  inside mian after swap ="<<&b<<endl;



}