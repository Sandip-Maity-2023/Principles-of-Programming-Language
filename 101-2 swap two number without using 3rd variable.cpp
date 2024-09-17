//
// Created by 12san on 17-09-2024.
//
#include<iostream>
using namespace std;

class Swap{
private:
    int a,b;
public:
    void fun(){
        cout<<"Enter the value of A & B:"<<endl;
        cin>>a>>b;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"value of A & B:"<<endl<<a<<endl<<b<<endl;
    }
};
int main(){
    Swap s;
    s.fun();
}