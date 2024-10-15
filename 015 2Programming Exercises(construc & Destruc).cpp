//
// Created by 12san on 10-10-2024.
//6.1,2

#include<iostream>
using namespace std;
#include<cstring>


class String{
    char *name;
    int length;
public:
    String(){                 //constructor 1
        length=0;
        name=new char[length + 1];
    }
    String(char *s){         //constructor 2
        length=strlen(s);
        name=new char[length+1];
        strcpy(name,s);

    }
    void display(){
        cout<<name<<endl;
        void join(String &a,String &b);
    }
};

