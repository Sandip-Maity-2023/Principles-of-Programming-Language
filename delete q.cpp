//
// Created by 12san on 16-10-2024.
//
#include<iostream>
using namespace std;

class student{
private:
    string name;
    int age=0;
public:
    student(string n="sandip",int a=0){
        name=n;
        age=a;
    }
    void display(){
        cout<<"name: "<<name<<endl<<"age: "<<age<<endl;
    }
};
int main(){
    student s1;
    s1.display();
    student s2("Jane",25);
    s2.display();

    student s3("foster");
    s3.display();

    return 0;

}