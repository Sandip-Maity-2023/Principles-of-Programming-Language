//
// Created by 12san on 16-03-2025.
//
#include <bits/stdc++.h>

using namespace std;
bool mycompare(pair<int,int>p1,pair<int,int>p2){
    return p1.first<p2.first;
}

int main(){
    int arr[]={100,28,34,947,93};
    vector<pair<int,int>>v;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
    v.push_back(make_pair(arr[i],i));
}
    sort(v.begin(),v.end(),mycompare);

    cout<<"Sorted pairs"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<"{"<<v[i].first<<","<<v[i].second<<"}"<<endl;
    }
    cout<<endl;

    cout<<"print the array"<<endl;
    for(auto x:arr){
        cout<<x<<endl;
    }

    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;
    }

    cout<<"updated arr with indexes"<<endl;
    for(auto y:arr){
        cout<<y<<" ";
    }

    cout<<"\n";
    cout<<"sorted values"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" ";
    }
    cout<<endl;
    return 0;
}