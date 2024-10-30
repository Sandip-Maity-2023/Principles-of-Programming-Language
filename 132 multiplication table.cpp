//
// Created by 12san on 29-10-2024.
//
#include<iostream>
using namespace std;

class multiply{
private:
    int n;
public:
    void null(){
        cout<<"Enter the range: ";
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=10;j++){
                cout<<i<<"*"<<j<<"="<<i*j<<endl;
            }
            cout<<".................\n";
        }
    }
};
int main(){
    multiply m;
    m.null();

    return 0;
}