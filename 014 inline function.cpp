//
// Created by 12san on 29-09-2024.
//
#include<iostream>
using namespace std;

class operation{
    float a,b,sum,diff,mul,div;
public:
    void get();
    void add();
    void sub();
    void multi();
    void divide();
};
inline void operation::get() {
    cout<<"Enter 1st value & 2nd value: "<<endl;
    cin>>a>>b;
}
inline void operation::add() {
    sum=a+b;
    cout<<"Addition of two value: "<<sum<<endl;
}
inline void operation::sub(){
    diff=a-b;
    cout<<"Difference of two value: "<<diff<<endl;
}
inline void operation::divide() {
    div=a/b;
    cout<<"Division of two value: "<<div<<endl;
}
inline void operation::multi() {
    mul=a*b;
    cout<<"Multiplication of two value: "<<mul<<endl;
}
int main(){
    cout<<endl<<"Program using inline function: "<<endl;
    operation s;
    s.get();
    s.add();
    s.sub();
    s.multi();
    s.divide();

    return 0;
}