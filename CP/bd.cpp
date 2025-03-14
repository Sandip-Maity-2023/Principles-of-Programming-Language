#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <list>
#include <bitset>
#include <numeric>
#include <climits>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>

// or use #include<bits/stdc++.h> to include all the libraries at once.

//111->3
using namespace std;
int bd(int n){
int ans=0;
int x=1;
while(n>0){
    int r=n%10;
    ans+=r*x;
    x*=2;
    n/=10;
}
}
int main(){
    int n;
cout<<"Enter a binary number:";
cin>>n;
cout<<bd(n);

return 0;
}