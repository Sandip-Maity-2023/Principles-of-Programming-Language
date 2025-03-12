//
// Created by 12san on 11-03-2025.
//
#include<iostream>
using namespace std;
int fac(int n){
    int ans=n;
    for(int i=n-1;i>0;i--){
        int sum=0;
        for(int j=0;j<i;j++){
            sum+=ans;
        }
        ans=sum;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    cout<<"Factorial:"<<fac(n);


    }
