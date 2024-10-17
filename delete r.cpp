//
// Created by 12san on 16-10-2024.
//

#include<iostream>
using namespace std;

int count=0;

class alpha{
public:
    alpha(){
        count++;
        cout<<"No of object created "<<count<<endl;
    }
    ~alpha(){
        cout<<"no of object destroyed "<<count<<endl;
        count--;
    }
};

int main(){
    cout<<"Enter main "<<endl;
    alpha x,y;
    {
        cout<<"Enter block1"<<endl;
        alpha n;
    }
    {
        cout<<"Enter block2"<<endl;
        alpha p;
    }
    cout<<"re-enter main"<<endl;

    return 0;
}