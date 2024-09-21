//
// Created by 12san on 21-09-2024.
//
#include<iostream>
using namespace std;
class nature{
private:
    int a,b;
public:
    void func(){
        cout<<"Enter the num:"<<endl;
        cin>>a;
        (a%2)==0 ? cout<<a<<":is even number": cout<<a<<": is odd number";
    }
};

int main(){
    nature x;
    x.func();
    return 0;
}