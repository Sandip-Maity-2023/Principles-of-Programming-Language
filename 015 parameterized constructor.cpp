//
// Created by 12san on 01-10-2024.
//
#include<iostream>
using namespace std;

class integer{
    int a,b;
public:
    integer(int,int);  //declared
    void display(){
        cout<<"m="<<a<<endl;
        cout<<"n="<<b<<endl;
    }
};

integer::integer(int x, int y) {      //defined
    a=x;
    b=y;
}
int main() {
    integer x1(98, 8); //calling constructor implicitly
    integer x2 = integer(8475, 399); //calling constructor explicitly

    cout << "Object 1" << endl;
    x1.display();

    cout << "Object 2" << endl;
    x2.display();
}