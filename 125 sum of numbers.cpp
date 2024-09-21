//
// Created by 12san on 21-09-2024.
//
#include<iostream>
using namespace std;

class sum{
public:
    int n;
    void s() {
        cout << "Enter the last number: " << endl;
        cin>>n;
        int t=n*(n+1)/2;
        cout<<"The sum is "<<t<<endl;
    }
};
int main(){
    sum x;
    x.s();

}