//
// Created by 12san on 17-09-2024.
//
//Write a program to find out the area of a circle.The circle's radius is user input.
#include <iostream>

using namespace std;
class area{
private:
    float r,a;
public:
    void func(){
        cout<<"Enter the radius:";
        cin>>r;
        a=3.14*(r*r);
        cout<<"Area of Circle is:"<<a;
    }
};
int main(){
    area x;
    x.func();
    return 0;
}