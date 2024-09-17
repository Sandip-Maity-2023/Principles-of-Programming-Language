//
// Created by 12san on 17-09-2024.
//
//Write a program in c++ to make your own currency converter.
#include <iostream>
using namespace std;
class currency{
private:
    float rupees;
public:
    void get(){
        cout<<"Enter the amount in Rupees:";
        cin>>rupees;
    }
    void dollar(){
        cout<<"The amount in Dollar(America) is:"<<rupees*0.012<<endl;
    }
    void yan(){
        cout<<"The amount in Yan(Japan) is:"<<rupees*1.77<<endl;
    }
    void euro(){
        cout<<"The amount in Euro(Europe) is:"<<rupees*0.011<<endl;
    }
    void rubel(){
        cout<<"The amount in Russian Rubel is:"<<rupees*1.80<<endl;
    }
};
int main(){
    currency c;
    c.get();
    c.dollar();
    c.euro();
    c.yan();
    c.rubel();
    return 0;
}