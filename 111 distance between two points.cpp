//
// Created by 12san on 20-09-2024.
//
#include<iostream>
#include<cmath>
using namespace std;
class Distance{
private:
   float x1,x2,y1,y2;
public:
    void data(){
        cout<<"Enter the value of X1,X2,Y1 & y2:"<<endl;
        cin>>x1>>x2>>y1>>y2;
    }
    void func(){
        float a=pow((x1-x2),2);
        float b=pow((y1-y2),2);
        float c=sqrt(a+b);
        cout<<"The distance between two points :"<<c<<endl;
    }
};
int main(){
    Distance x;
    x.data();
    x.func();

    return 0;
}