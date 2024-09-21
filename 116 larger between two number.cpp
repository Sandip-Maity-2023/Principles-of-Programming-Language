//
// Created by 12san on 21-09-2024.
//
#include<iostream>
using namespace std;

class Greater{
private:
    float a,b;
public:
    void check(){
        cout<<"Enter two number:"<<endl;
        cin>>a>>b;
        (a>b) ? cout<<a<<":is larger."<<endl :
        (b>a) ? cout<<b<<":is larger."<<endl :
        cout<<a<<endl<<b<<" are equal."<<endl;

    }
};

int main(){
    Greater x;
    x.check();

    return 0;
}