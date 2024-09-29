//
// Created by 12san on 29-09-2024.
//
#include<iostream>
using namespace std;

class Distance{
private:
    int meter;
    friend int addFive(Distance);
public:
    Distance():meter(0){}
};
int addFive(Distance d){
    d.meter+=5;           //accessing private members from the function
    return d.meter;
}
int main(){
    Distance d;
    cout<<"Distance: "<<addFive(d)<< endl;
    return 0;
}
