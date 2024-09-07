//
// Created by 12san on 07-09-2024.
//
#include<iostream>
using namespace std;

const m=50;

class items{
    int code[m];
    float price[m];
    int count;
public:
    void CNT(void){
        count=0;
    }
    void getitem(void){
        cout<<"Enter item code:";
        cin>>code[count];
        cout<<"Enter price cost:";
        cin>>price[count];
        count++;
    }
};