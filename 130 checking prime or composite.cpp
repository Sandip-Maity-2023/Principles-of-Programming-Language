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
    if(a<=1){
cout<<a<<" It's NOT a prime number"<<endl;
return 0;
    }
    if(func(a,a-1)){
        cout<<a<<" is a prime number"<<endl;
    }
    else{
        cout<<a<<" is NOT a prime number"<<endl;
    }
    return 0;
}