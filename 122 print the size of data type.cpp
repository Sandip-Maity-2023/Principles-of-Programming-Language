//
// Created by 12san on 21-09-2024.
//
//Write a program in to print the size of a data type in floating point.
#include <iostream>
using namespace std;
class Size{
private:int a;
public:
    void data(){
        cout<<"Enter the number:";
        cin>>a;
        cout<<"The size in Float:"<<(float)sizeof(a)<<endl;
        cout<<"The size in int:"<<(int)sizeof(a)<<endl;
        cout<<"The size in double:"<<(double)sizeof(a)<<endl;
        //cout<<"The size in Float:"<<(void)sizeof(a)<<endl;
        cout<<"The size in short int:"<<(short int)sizeof(a)<<endl;
        cout<<"The size in long int:"<<(long int)sizeof(a)<<endl;
        cout<<"The size in bool:"<<(bool)sizeof(a)<<endl;
    }
};
int main(){
    Size s;
    s.data();
    return 0;
}