//
// Created by 12san on 04-07-2025.
//
#include<iostream>
#include<vector>
using namespace std;
class calc{
public:
int cgpa_from_sgpa(vector<int>&sgpa){
    int n=sgpa.size(),sum=0;
    for(int i=0;i<n;i++){
        sum+=sgpa[i];
    }
    return sum;
}
int cgpa_to_percentage(int n){

}
int grade_points(int n){

}
int input(){
    int n;
    double total_credits=0,weighted_sum=0;
    cout<<"Enter number of subjects:";
    cin>>n;
    for(int i=0;i<n;i++){
        double credit,grade;
        cout<<"subject:"<<i+1<<" Enter credit hours:";
        cin>>credit;
        cout<<"subject"<<i+1<<" Enter grade point:";
        cin>>grade;

        total_credits+=credit;
        weighted_sum+=credit*grade;
    }
    double cgpa=weighted_sum/total_credits;
    cout<<"Your CGPA:"<<cgpa<<endl;
}
};
int main(){
    calc x;
    x.input();
}