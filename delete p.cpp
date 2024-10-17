//
// Created by 12san on 16-10-2024.
//
#include<iostream>
using namespace std;
    class student {
    private:
        string name;
        int age;
    public:
        student() {
            name = "sandip";
            age = 0;
        }

        void display() {
            cout << "Name: " << name<<endl<< "Age: " << age << endl;
        }
    };
    int main(){
        student s;
        s.display();
        return 0;
    }
