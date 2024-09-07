//
// Created by 12san on 07-09-2024.
//
#include<iostream>
using namespace std;

class set{
    int m,n;
public:
    void input(void);
    void display(void);
    int largest(void);
};
int set::largest() {
    if(m>=n)
        return(m);
    else
        return(n);
}
void set::display() {
    cout<<"largest value="<<largest()<<endl;
}
void set::input() {
    cout<<"Input values of m & n:"<<endl;
    cin>>m>>n;
}
int main(){
    set x;
    x.input();
    x.display();
    x.largest();
    return 0;
}