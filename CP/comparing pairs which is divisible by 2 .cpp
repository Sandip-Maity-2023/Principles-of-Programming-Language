//
// Created by 12san on 11-03-2025.
//
#include <iostream>
#include <vector>
using namespace std;
int count_pair(int arr[],int n){
    int cnt_pair=0,a,b,c;
    vector<pair<int,int>,bool>np;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            a=arr[i];
            b=arr[j];
            c=a+b;
        }
    }
    pair<int,int>p=make_pair(a,b);
    if(c%2==0 && np[p] !=true){
        cnt_pair++;
        np[p]=true;
    }
}
int main(){
    int n;
    int arr[n];
    cout<<"No of couples:\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<count_pair(arr,n);
}