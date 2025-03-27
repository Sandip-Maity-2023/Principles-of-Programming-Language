//
// Created by 12san on 14-03-2025.
//
#include<bits/stdc++.h>
using namespace std;  //1A3F->6719
int hd(string n){
    int ans=0;
    int x=1;
    int s=n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans+=x*(n[i]-'0');
        }
        if(n[i]>='A' && n[i]<='F'){
            ans+=x*(n[i]-'A'+10);
        }
        x*=16;
        }
    return ans;
}
int main(){
    string s;
    cout<<"Enter hexadecimal number: "<<endl;
    cin>>s;
    cout<<hd(s);
    return 0;
}