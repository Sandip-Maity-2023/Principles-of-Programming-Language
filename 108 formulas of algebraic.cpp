//
// Created by 12san on 17-09-2024.
//
//Write a program in c++ to solve all the algebraic identities.
#include <iostream>
using namespace std;
class algebra{
private:
    int a,b,c;
public:
    void operation(){
        cout<<"Enter the value of a, b and c:";
        cin>>a>>b>>c;
        float s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13;
        s1=(a*a)+(2*a*b)+(b*b);
        s2=(a*a)-(2*a*b)+(b*b);
        s3=(a+b)*(a-b);
        s4=(a*a)+(b*b)+(c*c)+(2*a*b)+(2*b*c)+(2*c*a);
        s5=(a*a)+(b*b)+(c*c)+(2*a*b)-(2*b*c)-(2*c*a);
        s6=(a*a)+(b*b)+(c*c)-(2*a*b)-(2*b*c)+(2*c*a);
        s7=(a*a)+(b*b)+(c*c)-(2*a*b)+(2*b*c)-(2*c*a);
        s8=(a*a)+(b*b)+(c*c)-(2*a*b)+(2*b*c)-(2*c*a);
        s9=(a*a*a)+(b*b*b)+((3*a*b)+(a+b));
        s10=(a*a*a)-(b*b*b)-((3*a*b)+(a-b));
        s11=(a+b)*((a*a)-(a*b)+(b*b));
        s12=(a-b)*((a*a)+(a*b)+(b*b));
        s13=(a*a*a)+(b*b*b)+(c*c*c)-(3*a*b*c);
        cout<<"S1: "<<s1<<endl<<"S2: "<<s2<<endl<<"S3: "<<s3<<endl<<"S4: "<<s4<<endl<<"S5: "<<s5<<endl<<"S6: "<<s6<<endl<<"S7: "<<s7<<endl<<"S8: "<<s8<<endl<<"S9: "<<s9<<endl<<"S10: "<<s10<<endl<<"S11: "<<s11<<endl<<"S12: "<<s12<<endl<<"S13: "<<s13<<endl;
    }
};
int main(){
    algebra o;
    o.operation();
    return 0;
}