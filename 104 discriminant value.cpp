//
// Created by 12san on 17-09-2024.
//

#include<iostream>
#include<math.h>
using namespace std;
class value{
private:
    int a,b,c,D;
public:
    void display(){
        cout<<"Enter the value of a,b & c:"<<endl;
        cin>>a>>b>>c;
    }
    void func(){
        D=pow(b,2)-4*a*c;
        cout<<"Discriminant:"<<D<<endl;
    }
};

int main(){
    value x;
    x.display();
    x.func();
    return 0;
}