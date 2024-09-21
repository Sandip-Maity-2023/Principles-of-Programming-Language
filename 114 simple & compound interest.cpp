//
// Created by 12san on 21-09-2024.
//
#include<iostream>           //amount = principal * (1 + (rate / 100))**time
#include<math.h>
using namespace std;

class interest{
private:
    float p,r,t;
public:
    void get(){
        cout<<"Enter the Principle:"<<endl;
        cin>>p;
        cout<<"Enter the rate of Interest:"<<endl;
        cin>>r;
        cout<<"Enter the time of maturation:"<<endl;
        cin>>t;
    }
    void simple(){
        float A=(p*r*t)/100;
        cout<<"The Simple Interest:"<<A<<endl;
    }

    void compound(){
        float a=pow((1+r/100),t);
        float n=p*a;
        float interest=n-p;
        cout<<"The Compound Interest is :"<<interest<<endl;

    }
};

int main(){
    interest x;
    x.get();
    x.simple();
    x.compound();

    return 0;
}