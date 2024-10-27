//
// Created by 12san on 27-10-2024.
//
#include<iostream>
using namespace std;
class prime{
public:
   friend int func();
};
int func(int num,int i){
    if(i==1){
        return 1;
    }else{
        if(num%i==0){
            return 0;
        }else{
            return func(num,i-1);
        }
    }
}
int main(){
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    prime p;
    p.
}