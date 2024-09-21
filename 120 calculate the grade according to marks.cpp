//
// Created by 12san on 21-09-2024.
//
#include<iostream>
using namespace std;
 class grade{
 private:
     int marks;
 public:
     void func(){
              cout<<"Enter the marks:"<<endl;
              cin>>marks;
         ((marks >= 100) || (marks<0))  ? cout<<"Wrong entry again" :
         ((marks <=100 && marks >= 95)) ? cout<<"Grade is AA":
         ((marks < 95 && marks >= 85))  ? cout<<"Grade is A+" :
         ((marks < 85 && marks >= 75)) ? cout<<"Grade is A":
         ((marks < 75 && marks >= 65))  ? cout<<"Grade is B+" :
         ((marks < 65 && marks >= 55)) ? cout<<"Grade is B":
         ((marks < 55 && marks >= 45))  ? cout<<"Grade is C" :
         ((marks < 45 && marks >=30)) ? cout<<"Grade is D":
         cout<<"Grade is FAIL";
     }
 };

 int main(){
     grade n;
     n.func();

     return 0;
 }