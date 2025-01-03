//
// Created by 12san on 03-01-2025.
//
#include<iostream>
using namespace std;
const size=3;
template<class T>
class vector{
    T* v;      //type T vector
public:
    vector(){
        v=new T[size];
        for(int i=0;i<size;i++)
            v[i]=0;
    }
    vector(T* a) {
        for (int i = 0; i < size; i++) {
            v[i] = a[i];
        }
    }
        T opearator*(vector &y){
            T sum=0;
            for(int i=0;i<size;i++){
                sum+=this->v[i]*y.v[i];
            }
            return sum;
        }
};
int main(){
    float x[3]={1.2,3.4,6.3};
    float y[3]={4.3,3.9,0.8};
    vector<float>v1;
    vector<float>v2;
    v1=x;
    v2=y;
    float R=v1*v2;
    cout<<"R= "<<R<<endl;
    return 0;
}