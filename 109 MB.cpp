//
// Created by 12san on 17-09-2024.
//
//Write a program in c++ to make your own digital storage converter by taking the size in KB and convert it MB,GB and TB.
#include <iostream>
#include "math.h"
using namespace std;
class Byte{
private:
    float KB;
public:
    void getnum(){
        cout<<"Enter the number of bytes in KB (kilo bytes):";
        cin>>KB;
    }
    void Mega(){
        cout<<"The number of bytes in MB (Mega bytes):"<<KB/1024<<" MB"<<endl;
    }
    void Giga(){
        cout<<"The number of bytes in GB (Giga bytes):"<<KB/pow(1024,2)<<" GB"<<endl;
    }
    void Tera(){
        cout<<"The number of bytes in TB (Tera bytes):"<<KB/pow(1024,3)<<" TB"<<endl;
    }
};
int main(){
    Byte b;
    b.getnum();
    b.Mega();
    b.Giga();
    b.Tera();
    return 0;
}