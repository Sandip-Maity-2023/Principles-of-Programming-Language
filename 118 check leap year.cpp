//
// Created by 12san on 21-09-2024.
//
#include<iostream>
using namespace std;
class Leap{
public:
    int a;
    void check() {
        cout << "Enter the year:" << endl;
        cin>>a;
        ((a%400==0) || ((a%4)==0) && ((a%100) !=0)) ? cout<<a<<" :is Leap Year": cout<<a<<" :is not Leap Year";
    }
};
int main(){
    Leap x;
    x.check();
    return 0;
}