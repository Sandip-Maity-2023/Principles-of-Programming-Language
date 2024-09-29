//
// Created by 12san on 28-09-2024.
//
#include<iostream>
using namespace std;
class sample{
private:
    int a,b;
public:
    void get(){
        a=25;
        b=36;
    }
    friend float mean(sample s);
};
float mean(sample s){

return (s.a+s.b)/2.0;
}

int main(){
    sample x;
    x.get();
    cout<<"Mean: "<<mean(x)<<endl;
    return 0;
}

