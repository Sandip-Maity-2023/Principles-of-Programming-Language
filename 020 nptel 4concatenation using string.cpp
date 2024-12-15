#include<iostream>
using namespace std;
#include<cstring>

typedef struct fun_string {
    char *str;
}a;

int main(){
    a fname,lname,name;
    fname.str=strdup("sandip ");
    lname.str=strdup("maity");
    name.str=(char*)malloc(strlen(fname.str)+strlen(lname.str)+1);

    strcpy(name.str,fname.str);
    strcat(name.str,lname.str);
    cout<<"First Name: "<<fname.str<<endl;
    cout<<"Last Name: "<<lname.str<<endl;
    cout<<"Full Name: "<<name.str<<endl;
}
