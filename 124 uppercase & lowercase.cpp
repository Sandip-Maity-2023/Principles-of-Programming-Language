//
// Created by 12san on 21-09-2024.
//
#include<iostream>
using namespace std;

class character{
public:
    void uppercase() {
        char ch;
        cout << "Enter the character:" << endl;
        cin>>ch;
        (ch>='a' && ch<='z') ? cout<<"It is Lower Case" : cout<<"It is Upper Case";
    }
};
int main(){
    character x;
    x.uppercase();
    return 0;
}