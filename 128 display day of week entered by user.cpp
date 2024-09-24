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
        cout<<"Enter your choice: "<<endl;
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"It is Monday.";
                break;
            case 2:
                cout<<"It is Monday.";
                break;
            case 3:
                cout<<"It is Monday.";
                break;
            case 4:
                cout<<"It is Monday.";
                break;
            case 5:
                cout<<"It is Monday.";
                break;
            case 6:
                cout<<"It's Saturday"<<endl;
                break;
            case 7:
                cout<<"It's a Sunday."<<endl;
            default:
                cout<<"ERROR!"

        }
    }
};
int main(){
    week x;
    x.day();
    printf""
}