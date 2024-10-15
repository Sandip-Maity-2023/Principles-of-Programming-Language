//
// Created by 12san on 24-09-2024.
//
#include<iostream>
using namespace std;

class week{
private:
    int ch;
public:
    void day(){
        cout<<"Enter your choice(Day no of the week) : "<<endl;
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"It is Monday."<<endl;
                break;
            case 2:
                cout<<"It is Tuesday."<<endl;
                break;
            case 3:
                cout<<"It is Wednesday."<<endl;
                break;
            case 4:
                cout<<"It is Thursday."<<endl;
                break;
            case 5:
                cout<<"It is Friday."<<endl;
                break;
            case 6:
                cout<<"It's Saturday"<<endl;
                break;
            case 7:
                cout<<"It's a Sunday."<<endl;
            default:
                cout<<"ERROR!"<<endl;

        }
    }
};
int main(){
    week x;
    x.day();
}