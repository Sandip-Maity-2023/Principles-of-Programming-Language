/*
#include<iostream>
using namespace std;
enum E{
    c0=0,c1=1,c2=2
};
int main(){
    E a=c1,b=c2;
    int x=-1;
    x=a + b ;  //operator + for int
    cout<<x<<endl;

}
*/

#include<iostream>
using namespace std;
enum E{
    c0=0,c1=1,c2=2
};
E operator+(const E& s1,const E& s2){
    unsigned int u=s1,v=s2;
    unsigned int t=(u+v)%3;
    return (E) t;
}
int main(){
    E x=c1,y=c2;
    int z=-1;
    z=x+y;
    cout<<z<<endl;
}