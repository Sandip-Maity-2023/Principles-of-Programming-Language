//
// Created by 12san on 17-09-2024.
//
#include<iostream>
using namespace std;
class change{
private:
    int a=20;
public:
    void display() {
        cout << "Initial:"<<a<<endl;
    }
    void fun(){
        cout<<"Enter the value:"<<endl;
        cin>>a;
        cout<<"New value:"<<a<<endl;
    }
};
int main(){
    change m;
    m.display();
    m.fun();
    return 0;
}