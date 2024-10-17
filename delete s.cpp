//
// Created by 12san on 16-10-2024.
//
#include<iostream>
using namespace std;

class code{
    int id;
public:
    code(){

    }
    code(int a){
        id=a;
    }
    code(code & x){
        id=x.id;
    }
    void display(){
        cout<<"Id :"<<id<<endl;

    }
};
int main(){
    code a(100);
    code b(a);
    code c=a;

    code d;
    d=a;

    cout<<"Id of a: "<<endl;
    a.display();

    cout<<"Id of b: "<<endl;
    b.display();

    cout<<"Id of c: "<<endl;
    c.display();

    cout<<"Id of d: "<<endl;
    d.display();

    return 0;
}