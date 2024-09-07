#include<iostream>
using namespace std;
class item{
    int number;
    float price;
public:
    void getdata(int a,float b);

    void putdata(void){
        cout<<"number:"<<number<<"\n";
        cout<<"price:"<<price<<"\n";
    }
};
 void item::getdata(int a, float b) {
     number=a;
     price=b;
 }
 int main(){
     item x;
     cout<<"object"<<endl;
     x.getdata(204,347.64);
     x.putdata();


     return 0;
 }