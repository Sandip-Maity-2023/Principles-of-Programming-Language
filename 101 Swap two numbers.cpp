//
// Created by 12san on 17-09-2024.
//
#include<iostream>
using namespace std;
class Swap{           // In C++, class names usually follow the PascalCase convention. So you might want to rename the class from swap to Swap.
private:
    int a,b;
public:
    void fun(){
        cout<<"Enter the value of A & B:"<<endl;
        cin>>a>>b;
        int temp=a;
        a=b;
        b=temp;
    }
    void display(){

        cout<<"New value of A & B:"<<endl<<a<<endl<<b<<endl;
    }
};
int main(){
    Swap s;
    s.fun();
    s.display();
    return 0;
}