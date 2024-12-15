#include<iostream>
using namespace std;
 
 #define str(x) #x

 #define glue(a,b) a##b
 int main(){

 cout<<str(test)<<endl;

 glue(c,out)<<"test"<<endl;   //The glue(c,out) macro correctly concatenates c and out into cout, but cout is not defined unless you include <iostream> and use the std:: namespace or explicitly declare using namespace std;
 }
