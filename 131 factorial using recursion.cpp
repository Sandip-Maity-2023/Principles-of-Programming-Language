//
// Created by 12san on 28-10-2024.
//
#include<iostream>
using namespace std;

class factorial{
private:
    int n;
public:
    void check() {
        cout << "Enter the number: " << endl;
        cin >> n;
        int a = 1;
        while (n > 0) {

            a *= n;
            n--;
        }
        cout << "The factorial is : " << a << endl;
    }
    };
int main(){
    factorial x;
    x.check();

    return 0;
}