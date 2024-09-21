//
// Created by 12san on 21-09-2024.
//
#include<iostream>

using namespace std;
class num{
private:
    int n;
    void check(){
        cout<<"Enter the number to be checked:"<<endl;
        cin>>n;
        (n>0) ? cout<<" It's positive." : cout<<"It's negative."<<endl;
    }
public:
    void to_check(){
        check();
    }
};
int main(){
    num x;
    x.to_check();

    return 0;

}