//
// Created by 12san on 22-12-2024.
//
#include<iostream>
using namespace std;

class fun{
public:
    int add(int a,int b){
        return a+b;
    }
    int sub(int a,int b){
        return a-b;
    }
    int mul(int a,int b){
        return a*b;
    }
    int div(int a,int b){
        return a/b;
    }
    int mod(int a,int b){
        return a%b;
    }
    int fac(int a){
         int fact=1;
        for(int i=1;i<=a;i++){
             fact=fact*i;
        }
        return fact;
    }

};
int main(){
    int a,x,y;
    fun q;
    while(1) {
        cout << "Choose the option\n" << endl;
        cout << "1. Addition(+)" << endl;
        cout << "2. Subtraction(-)" << endl;
        cout << "3. Multiplication(*)" << endl;
        cout << "4. Division(/)" << endl;
        cout << "5. Modulus(%)" << endl;
        cout << "6. Factorial(!)" << endl;
        cout<<  "7. Applying Brackets[{(`)}]"<<endl;
        cout << "8. Exit "<<endl;
        cin>>a;
        switch(a){
            case 1:
                cout << "Enter two Number:" << endl;
                cin>>x>>y;
                cout<<q.add(x,y)<<endl;
                break;
            case 2:
                cout << "Enter two Number:" << endl;
                cin>>x>>y;
                cout<<q.sub(x,y)<<endl;
                break;
            case 3:
                cout << "Enter two Number:" << endl;
                cin>>x>>y;
                cout<<q.mul(x,y)<<endl;
                break;
            case 4:
                cout << "Enter two Number:" << endl;
                cin>>x>>y;
                cout<<q.div(x,y)<<endl;
                break;
            case 5:
                cout << "Enter two Number:" << endl;
                cin>>x>>y;
                cout<<q.mod(x,y)<<endl;
                break;
            case 6:
                cout << "Enter Number:" << endl;
                cin>>x;
                cout<<q.fac(x)<<endl;
                break;
            case 7:
                cout<<"Enter the Expressions:"<<endl;
                cin>>x;
                break;
            case 8:
                exit(0);
            default:
                cout<<"Invalid Input"<<endl;
        }
    }
}
