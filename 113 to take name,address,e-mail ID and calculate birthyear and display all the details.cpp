//
// Created by 12san on 20-09-2024.
//
#include<iostream>
#include<string>
using namespace std;

class student{
private:
    char name[20],program[20],email[30];
    int year;
public:
    void get(){
        string name;
        cout<<"Enter the Name:"<<endl;
        cin>>name;
        cout<<"Enter the program:"<<endl;
        cin>>program;
        cout<<"Enter the E-mail:"<<endl;
        cin>>email;
        cout<<"Enter the Birth year:"<<endl;
        cin>>year;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Program:"<<program<<endl;
        cout<<"E-mail:"<<email<<endl;
        cout<<"Age:"<<2024-year<<endl;
    }
};

int main(){
    student x;
    x.get();
    x.display();

    return 0;
}