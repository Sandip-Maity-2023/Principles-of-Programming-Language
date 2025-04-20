#include<iostream>
using namespace std;

bool isSafe(int** a,int x,int y,int n){
    if(x<n && y<n && a[x][y]==1){
        return true;
    }
    return false;
}
bool ratInMaze(int** a,int x,int y,int n,int** solArr){

    if(x==n-1 && y==n-1){   //destination reached
        solArr[x][y]=1;
        return true;
    }
if(isSafe(a,x,y,n)){
    solArr[x][y]=1;
    if(ratInMaze(a,x+1,y,n,solArr)){
        return true;
    }
    if(ratInMaze(a,x,y+1,n,solArr)){
        return true;
    }
solArr[x][y]=0;
return false;
}
return false;
}
int main(){
    int n=5;
    cin>>n;
    int** a=new int*[n]; //dynamic 2d array
    for(int i=0;i<n;i++){ //creating rows
        a[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
cin>>a[i][j];
        }
    }
    int** solArr=new int*[n];
    for(int i=0;i<n;i++){
        solArr[i]=new int[n];  //creating rows
        for(int j=0;j<n;j++){
            solArr[i][j]=0;
        }
    }
    if(ratInMaze(a,0,0,n,solArr)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<solArr[i][j]<<" ";
            }cout<<endl;
        }
    }
    return 0;
    for(int i=0;i<n;i++){
        delete [] a[i]; //deleting rows
    }

}
