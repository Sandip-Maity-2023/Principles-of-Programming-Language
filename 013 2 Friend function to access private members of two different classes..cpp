//
// Created by 12san on 28-09-2024.
//
#include<iostream>
using namespace std;
class A;
class B{
private:
    int n1;
public:
    void set(int a){
        n1=a;
    }
    friend int add(A,B);
};

class A{
private:
    int n2;
public:
    void get(int b){
        n2=b;
    }
    friend int add(A,B);
};

int add(A x,B y){
    return x.n2+y.n1;  //accessing private members
}

int main(){
    A m;
    B n;
    m.get(10);
    n.set(20);

    cout<<"Sum of n1 & n2: "<<add(m,n)<<endl;

    return 0;
}