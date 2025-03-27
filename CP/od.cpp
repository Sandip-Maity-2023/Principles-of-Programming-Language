//
// Created by 12san on 14-03-2025.
//
#include <bits/stdc++.h>
using namespace std;

int od(int n){
    int x=1;
    int ans=0;
    while(n>0){
        int r=n%10;
        ans+=r*x;
        x*=8;
        n/=10;
    }
    return ans;
}
 int main(){
    unsigned int n;
cout<<"Enter Octal Number:";
cin>>n;
cout<<od(n);
return 0;
}
