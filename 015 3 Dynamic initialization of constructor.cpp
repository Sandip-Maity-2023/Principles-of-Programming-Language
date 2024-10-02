//
// Created by 12san on 02-10-2024.
//
#include<iostream>
using namespace std;

class deposit {
    int principal;
    float interest_rate;
    float value;
    int year;
public:
    deposit() {                           //constructor with zero argument

    }

    deposit(int p, int y, float r = 0.12);  //constructor with default argument

    deposit(int p, int y, int r);  //constructor with arguments

void display();
};

void deposit::display() {
    cout<<"Principal Amount: "<<principal<<endl;
    cout<<"Year: "<<year<<endl;
    cout<<"Interest Rate: "<<interest_rate<<endl;
    cout<<"Interest value: "<<value<<endl;

}
deposit::deposit(int p,int y,int r){
    principal=p;
    year=y;
    interest_rate=float(r)/100.0;
    value=principal;

    for(int i=1;i<=y;i++){
        value=value*(1.0+interest_rate); //I=p(1+r/100)^n  ---> value=value*(1+r)
    }
}
deposit::deposit(int p,int y,float r){
    principal=p;
    year=y;
    interest_rate=r;
    value=principal;

    for(int i=1;i<=y;i++){
        value=value*(1.0+r);
    }
};
int main(){
    deposit x1,x2,x3;
    int p,y,r;
    float R;
    cout<<"Enter the value of Principal,year & interest Rate(percentage) : "<<endl;
    cin>>p>>y>>r;
    x1=deposit(p,y,r);

    cout<<"Deposit 1"<<endl;
    x1.display();

    cout<<"Enter the value of Principal,year & interest Rate(Decimal) : "<<endl;
    cin>>p>>y>>R;
    x2=deposit(p,y,R);

    cout<<"Deposit 2"<<endl;
    x2.display();

    cout<<"Deposit 3"<<endl;
    x3.display();

    return 0;
}