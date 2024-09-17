//
// Created by 12san on 17-09-2024.
//
#include <iostream>
#include <cmath> //math.h
using namespace std;

class line {
private:
    float y, m, x, c;
public:
    void get() {
        cout << "Enter the values of Y, M, X, and C (y=mx+c): "<<endl;
        cin >> y >> m >> x >> c;
    }

    // Function to check if the point lies on the line y = mx + c
    void func() {
        // Calculate the expected y value from the equation y = mx + c
        float expected_y = (m * x) + c;

        // Compare the actual y value with the calculated y value with a small tolerance for floating-point precision

        if (fabs(y - expected_y) < 0.000001) {
            cout <<"It is a straight line."<< endl;
        } else {
            cout <<"It is not a straight line."<< endl;
        }
    }
};

int main() {
    line l;
    l.get();
    l.func();
    return 0;
}
