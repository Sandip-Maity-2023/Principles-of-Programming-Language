//
// Created by 12san on 17-09-2024.
//
//Write a program in c++ to calculate the area of triangle using Heron's formula.
#include <iostream>
#include <math.h>

using namespace std;
class triangle{
private:
    float s,a,b,c,area;
public:
    void get(){
        cout<<"Enter the sides of the triangle:"<<endl;
        cin>>a>>b>>c;
    }
    void Area(){
        s=(a+b+c)/2;
        area= sqrt(s*((s-a)*(s-b)*(s-c)));
        cout<<"The Area is: "<<area<<endl;
    }
};
int main(){
    triangle t;
    t.get();
    t.Area();
    return 0;
}