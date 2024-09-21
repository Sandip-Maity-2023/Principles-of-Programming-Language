//
// Created by 12san on 21-09-2024.
//
#include<iostream>
using namespace std;
class largest{
public:
    float a,b,c;
    void check(){
        cout<<"Enter 3 number: "<<endl;
        cin>>a>>b>>c;
        (a>b && a>c)?cout<<a<<" is largest"<<endl:
        (b>c && b>a)?cout<<b<<" is largest"<<endl:
        (c>a && c>b)?cout<<c<<" is largest"<<endl:
        cout<<"Invalid Input"<<endl;

        (a<b && a<c)?cout<<a<<" is smallest"<<endl:
        (b<c && b<a)?cout<<b<<" is smallest"<<endl:
        (c<a && c<b)?cout<<c<<" is smallest"<<endl:
        cout<<"Invalid Input"<<endl;
    }
};
int main(){
    largest x;
    x.check();

    return 0;
}