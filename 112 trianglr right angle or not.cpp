//
// Created by 12san on 20-09-2024.
//
#include<iostream>
using namespace std;
class Right{
private:
    float a,b,c;
public:
    void right(){
        (b*b==c*c+a*a || c*c==a*a+b*b || a*a==c*c+b*b ) ? cout<<"The triangle is Right angle."<<endl : cout<<"It's not."<<endl;

        }
    void display(){
        cout<<"Enter the value of 3 sides of triangle: "<<endl;
        cin>>b>>c>>a;
    }
};
int main() {
    Right x;
    x.display();
    x.right();
    return 0;
}