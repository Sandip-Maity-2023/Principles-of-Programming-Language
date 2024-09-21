//
// Created by 12san on 21-09-2024.
//
#include<iostream>
using namespace std;
class user{
public:
    void vowel(){
        char ch;
        cout<<"Enter the character:"<<endl;
        cin>>ch;
        if(ch=='a' || ch=='e' || ch=='i' ||ch=='o' ||ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U')
            cout<<"The character is Vowel."<<endl;
        else
            cout<<"The character is Consonant."<<endl;
    }
};
int main(){
    user x;
    x.vowel();

    return 0;
}