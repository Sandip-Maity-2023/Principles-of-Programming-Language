#include<iostream>
using namespace std;

#define getmax(a,b) (((a)>(b)) ? (a):(b))    //(((a)>(b)) ? (a):(b)) whole backet is needed

#define table_size 100
int table1[table_size];
#undef table_size

#define table_size 200
int table2[table_size];


int main(){
    int x=5,y;
    y=getmax(x,2);
    cout<<y<<endl<<getmax(7,x)<<endl;
    




int x1=table_size;
    cout<<table1<<endl;
    cout<<table2<<endl;
    cout<<x1<<endl;

return 0;
}