#include<iostream>
#include<string>

//string class... 
using namespace std;

int main(){


    // char str[] = "Hello World";
    string name = "Hello World 1";
    cout<<name<<endl;

    name.push_back('!');
    cout<<name<<endl;
    name.pop_back();
    cout<<name<<endl;

    name.append(" How are you?");
    cout<<name<<endl;

    name.insert(5,"My name is ");
    cout<<name<<endl;

    name.erase(5,11);
    cout<<name<<endl;

    name.replace(0,1,"#");
    cout<<name<<endl;

    string ss = name.substr(0,5);
    cout<<ss<<endl;

    // name.swap(ss);
    // cout<<name<<endl;
    // cout<<ss<<endl;

    cout<<name.size()<<endl;
    
    //name.clear();
    cout<<name.size()<<endl;
    //name.resize(10);
    cout<<name<<endl;
    cout<<name.size()<<endl;

    cout<<name.capacity()<<endl;

    name.shrink_to_fit();
    cout<<name.capacity()<<endl;
    name.reserve(100);
    cout<<name.capacity()<<endl;


    cout<<name.empty()<<endl;
    
    // for(int i=0;i<name.size();i++){
    //     cout<<name[i]<<" ";
    // }

    for(auto x:name){
        cout<<x<<" ";
    }


}