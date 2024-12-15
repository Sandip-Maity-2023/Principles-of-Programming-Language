/*
#if TABLE_SIZE>200
#undef TABLE_SIZE
#define TABLE_SIZE 200
 #elif TABLE_SIZE<50
#undef TABLE_SIZE
#define TABLE_SIZE 50
#else
#undef TABLE_SIZE
#define TABLE_SIZE 100
#endif
int table[TABLE_SIZE];
*/

#include<iostream>
using namespace std;

class point{
    public:
    int x,y;
};
class rect{
    public:
point a;
point b;
};

int main(){

rect r={{0,2},{5,7}};

cout<<"[("<<r.a.x<<" "<<r.a.y<<") ,("<<r.b.x<<" "<<r.b.y<<")]"<<endl;

return 0;
}