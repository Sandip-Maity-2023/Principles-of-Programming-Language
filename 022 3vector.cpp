//
// Created by 12san on 03-01-2025.
//

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> num;
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    num.push_back(5);

    cout << num[3] << endl;
    cout << num[4] << endl;//out of range

    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << endl;
    }// 1 2 3
cout<<"\n"<<endl;
    vector<int>::iterator x;
    for(x=num.begin();x !=num.end();x++){
        cout<<*x<<endl;
    }// 1 2 3

cout<<"\n"<<endl;
    for(auto element:num){
        cout<<element<<endl;
    }// 1 2 3

    num.pop_back();
    num.pop_back();

    vector<int>p(3,50); // size 3 & values are 50
    for(auto y:p){
        cout<<y<<endl;
    }
    swap(num,p);
    for(auto x:num){
        cout<<x<<endl;
    }
    for(auto y:p){
        cout<<y<<endl;  //i have pop already looked above
    }

    sort(p.begin(),p.end());
for(auto x:p){
    cout<<x<<endl;
}
    return 0;

}


//}
// */
///*
//int main(){
//    vector<int>numbers;
//
//    numbers.push_back(2);
//    numbers.push_back(34);
//    numbers.push_back(32);
//    numbers.push_back(98);
//    numbers.push_back(46);
//
//    cout<<"size of numbers:"<<numbers.size()<<endl;
//    cout<<"capacity of numbers:"<<numbers.capacity();
//}
// */
//
///*
//int main(){
//    vector<int>numbers;
//    int value;
//for(int i=0;i<3;i++){
//    cout<<"enter value:\n"<<endl;
//    cin>>value;
//    numbers.push_back(value);
//}
//    cout<<numbers[1]<<endl;
//    cout<<numbers[2]<<endl;
//
//
//    cout<<"size of numbers:"<<numbers.size()<<endl;
//    cout<<"capacity of numbers:"<<numbers.capacity()<<endl;
//}
//*/
//
///*
//int main(){
//    vector<int>numbers(10,5);
//    int value;
//    for(int i=0;i<numbers.size();i++) {
//        cout<<numbers[i]<<endl;
//    }
//
//    //cout<<numbers[2]<<endl;
//
//
//    cout<<"size of numbers:"<<numbers.size()<<endl;
//    cout<<"capacity of numbers:"<<numbers.capacity()<<endl;
//}
//*/
///*
//int main(){
//    vector<int>numbers(10);
//    fill(numbers.begin(),numbers.end(),5);
//
//    for(int i=0;i<numbers.size();i++) {
//        cout<<numbers[i]<<endl;
//    }
//
//    //cout<<numbers[2]<<endl;
//
//
//    cout<<"size of numbers:"<<numbers.size()<<endl;
//    cout<<"capacity of numbers:"<<numbers.capacity()<<endl;
//}
//*/
//int main(){
//    vector<int>numbers={1,4,7,8,95,432,24};
//    vector<int>numbers2(numbers.begin(),numbers.end());
//    //fill(numbers.begin(),numbers.end(),5);
//
//    for(int i=0;i<numbers2.size();i++) {
//        cout<<numbers2[i]<<endl;
//    }
//
//    //cout<<numbers[2]<<endl;
//
//
//    cout<<"size of numbers:"<<numbers.size()<<endl;
//    cout<<"capacity of numbers:"<<numbers.capacity()<<endl;
//}
//
////Assignment
////question:create a vector of size 10 which can store boolean and populate this vector with all 0s.
//vector<bool>numbers(10);
//for(int i=0;i<numbers;i++){
//    cout<<numbers[i]<<endl;
//}
//cout<<"size of numbers:"<<numbers.size()<<endl;
//cout<<"capacity of numbers:"<<numbers.capacity()<<endl;
