//
// Created by 12san on 17-09-2024.
//
#include<iostream>
using namespace std;

class memory{
private:
    int a=10,b=20,c=30,d=40;
public:
    void display(){
        cout<<&a<<endl<<&b<<endl<<&c<<endl<<&d<<endl;
    }
};
int main(){
    memory m;
    m.display();
    return 0;
}