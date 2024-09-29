//
// Created by 12san on 28-08-2024.
//
#include<iostream>
using namespace std;
class item{
private:
    int qt;
    int price;
public:
    void get(int a,int b){
        qt=a;
        price=b;
    }
    void display(){
        cout<<qt<<endl<<price;
    }
};
int main(){

    item x;
    x.get(22,45);
    x.display();
    return 0;

   /*
    item m,n,x;
    cout<<"Enter two number:"<<endl;
    cin<<m<<n;
    x.display(m,n);
    return 0;
    */
}
