//
// Created by 12san on 17-09-2024.
//
#include<iostream>
using namespace std;
class temperature{
private:
    float c,f;
public:
    void func(){
        cout<<"Enter the temperature:"<<endl;
        cin>>c;
        f=((c*9)/5)+32;
    }
    void dispaly(){
        cout<<"Temperature in Farenheit: "<<f<<" Degree"<<endl;
    }
};

int main(){
    temperature x;
    x.func();
    x.dispaly();
    return 0;
}