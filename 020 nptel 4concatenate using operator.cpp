#include<iostream>
using namespace std;
#include<cstring>

typedef struct func{
    char *str;
}a;
a operator+(const a& s1,const a& s2){
    a x;
    x.str=(char*)malloc(strlen(s1.str)+strlen(s2.str)+1); //allocation
    strcpy(x.str,s1.str);
    strcat(x.str,s2.str);

    return x;
}
int main(){
    a fname,lname,name;
    fname.str=strdup("sandip ");
    lname.str=strdup("maity");
    name=fname+lname; //overloaded operator +
    cout<<"First Name: "<<fname.str<<endl;
    cout<<"Last Name: "<<lname.str<<endl;
    cout<<"Name: "<<name.str<<endl;
}