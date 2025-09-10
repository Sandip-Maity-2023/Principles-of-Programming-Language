#include<iostream>
#include<vector>

using namespace std;

void setmatrix(vector<vector<int>>&a){
    int n=a.size(),
    m=a[0].size();

    vector<bool>rows(n,false);
    vector<bool>cols(n,false);
    for(int i=0;i<n;i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0) {
                rows[i] = true;   //i
                cols[j] = true; //j
            }
        }
    }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(rows[i] || cols[j]){
                    a[i][j]=0;
                }
            }
        }
}
void setmatrix1(vector<vector<int>>&a){
    int n=a.size();
    int m=a[0].size();

    int c0=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0){
                a[i][0]=0;
                if(j==0) c0=0;
                else a[0][j]=0;
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][0]==0 || a[0][j]==0) a[i][j]=0;
        }
    }
    if(a[0][0]==0) for(int j=0;j<m;j++) a[0][j]=0;

    if(c0==0) for(int i=0;i<n;i++) a[i][0]=0;
}
int main(){
    vector<vector<int>>mat={{0,1,2,0},
                            {3,4,0,2},
                            {1,3,1,5}};
    setmatrix1(mat);
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cout<<mat[i][j]<<" ";
            }
        cout<<endl;
        }
}

//https://www.youtube.com/watch?v=A0_hEzQFP9U