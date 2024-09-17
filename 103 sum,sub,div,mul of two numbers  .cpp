//
// Created by 12san on 17-09-2024.
//
#include<iostream>
using namespace std;
class func{
private:
    int a,b;
    int add,sub,mul,div,mod,l_shift,r_shift;
public:
    void operations(){
        cout<<"Enter two Integers:"<<endl;
        cin>>a>>b;
        add=a+b;
        sub=a-b;
        mul=a*b;
        div=a/b;
        mod=a%b;
        r_shift=a>>b;   //num>>2=num/(2^2);
        l_shift=a<<b;  //num<<2=num*(2^2);
    }
    void display(){
        cout<<"Addition:"<<add<<endl;
        cout<<"Subtraction:"<<sub<<endl;
        cout<<"Multiplication:"<<mul<<endl;
        cout<<"Division:"<<div<<endl;
        cout<<"Modulus:"<<mod<<endl;
        cout<<"left Shift:"<<l_shift<<endl;
        cout<<"right Shift:"<<r_shift<<endl;
    }
};
int main(){
    func x;
    x.operations();
    x.display();
    return 0;
}