//
// Created by 12san on 16-08-2025.
//
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

string lexicographical(string p,string s){
    vector<int>order(26,0);
    for(int i=0;i<26;i++) order[p[i]-'a']=i;

    sort(s.begin(),s.end(),[&](char x,char y){return order[x-'a']<order[y-'a'];
    });
    return s;
}
int main(){
    int t;
    vector<string>res;
    cin>>t;
    for(int i=0;i<t;i++) {
        string p, s;
        cin >> p >> s;
        string r = lexicographical(p, s);
        res.push_back(r);
    }
        for(string i:res)
            cout<<i<<endl;

}