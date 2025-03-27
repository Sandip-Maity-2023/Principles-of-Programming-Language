//
// Created by 12san on 16-03-2025.
//
#include<bits/stdc++.h> //include all header files
using namespace std;
int knapsack(int W,int wt[],int val[],int n) { //taking bag weight capacity,weights,values,no of items
    int dp[n + 1][W + 1];  //create a dp table of weights and values

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {

            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i - 1] <= w) {   /*current fits in bag */
               dp[i][w]= max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
//                return max(value already inserted + rest weight),next weight
            } else {
                dp[i][w]=dp[i - 1][w];
            }
        }
    }
        return dp[n][W];
}
int main(){
    int n,w;
    cout<<"Enter no of items: "<<endl;
    cin>>n;
    cout<<"Enter knapsack capacity:"<<endl;
    cin>>w;
    int wt[n],val[n];

    cout<<"Enter the weights:"<<endl;
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    cout<<"Enter values of items"<<endl;
    for(int i=0;i<n;i++)
        cin>>val[i];
    int max_value= knapsack(w,wt,val,n);
    cout<<"maximum value:"<<max_value<<endl;
    return 0;
}