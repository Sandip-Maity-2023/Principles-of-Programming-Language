//
// Created by 12san on 01-10-2024.
//

#include<iostream>
using namespace std;

class complex{
    float x,y;

public:
    complex(){

    }
    complex(float a){
        x=y=a;
    }
    complex(float real,float img){
        x=real;
        y=img;
    }

    friend complex sum(complex,complex);   //two complex number input

    friend void show(complex);
};
 complex sum(complex x1,complex x2 ){
     complex x3;
     x3.x=x1.x+x2.x;
     x3.y=x1.y+x2.y;

     return x3;
 }
 void show(complex k){
     cout<<k.x<<" + "<<k.y<<"i"<<endl;

 }

 int main(){
     complex A(2.7,5.7);  //we can do without same number like ||  complex B(9.0,5.7);
     complex B(1.6);
     complex C;

     C=sum(A,B);
     cout<<"A= ";
     show(A);
     cout<<"B= ";
     show(B);
     cout<<"C= ";
     show(C);

     return 0;
 }