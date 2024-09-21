//
// Created by 12san on 21-09-2024.
//
#include<iostream>
using namespace std;

class year{
private:
    int a;
public:
    void check(){
        cout<<"Enter Birth year:"<<endl;
        cin>>a;
        int b=2024-a;
        (b>=18) ? cout<<"You are eligible for vote" : cout<<"You are not eligible for vote";
    }
};

int main(){
    year x;
    x.check();

    return 0;
}