//
// Created by 12san on 03-01-2025.
//

#include<iostream>
#include<vector>
using namespace std;
/*
int main(){
    vector<int>numbers;
    numbers.push_back(2);
    numbers.push_back(34);
    numbers.push_back(32);
    numbers.push_back(98);

    cout<<numbers[3]<<endl;
    cout<<numbers[4]<<endl;
}
 */
/*
int main(){
    vector<int>numbers;

    numbers.push_back(2);
    numbers.push_back(34);
    numbers.push_back(32);
    numbers.push_back(98);
    numbers.push_back(46);

    cout<<"size of numbers:"<<numbers.size()<<endl;
    cout<<"capacity of numbers:"<<numbers.capacity();
}
 */

/*
int main(){
    vector<int>numbers;
    int value;
for(int i=0;i<3;i++){
    cout<<"enter value:\n"<<endl;
    cin>>value;
    numbers.push_back(value);
}
    cout<<numbers[1]<<endl;
    cout<<numbers[2]<<endl;


    cout<<"size of numbers:"<<numbers.size()<<endl;
    cout<<"capacity of numbers:"<<numbers.capacity()<<endl;
}
*/

/*
int main(){
    vector<int>numbers(10,5);
    int value;
    for(int i=0;i<numbers.size();i++) {
        cout<<numbers[i]<<endl;
    }

    //cout<<numbers[2]<<endl;


    cout<<"size of numbers:"<<numbers.size()<<endl;
    cout<<"capacity of numbers:"<<numbers.capacity()<<endl;
}
*/
/*
int main(){
    vector<int>numbers(10);
    fill(numbers.begin(),numbers.end(),5);

    for(int i=0;i<numbers.size();i++) {
        cout<<numbers[i]<<endl;
    }

    //cout<<numbers[2]<<endl;


    cout<<"size of numbers:"<<numbers.size()<<endl;
    cout<<"capacity of numbers:"<<numbers.capacity()<<endl;
}
*/
int main(){
    vector<int>numbers={1,4,7,8,95,432,24};
    vector<int>numbers2(numbers.begin(),numbers.end());
    //fill(numbers.begin(),numbers.end(),5);

    for(int i=0;i<numbers2.size();i++) {
        cout<<numbers2[i]<<endl;
    }

    //cout<<numbers[2]<<endl;


    cout<<"size of numbers:"<<numbers.size()<<endl;
    cout<<"capacity of numbers:"<<numbers.capacity()<<endl;
}

//Assignment
//question:create a vector of size 10 which can store boolean and populate this vector with all 0s.
vector<bool>numbers(10);
for(int i=0;i<numbers;i++){
    cout<<numbers[i]<<endl;
}
cout<<"size of numbers:"<<numbers.size()<<endl;
cout<<"capacity of numbers:"<<numbers.capacity()<<endl;
