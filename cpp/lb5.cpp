#include <iostream>
using namespace std;



int main(){
    
    int n,x,m;
    cout <<"Enter n,x,m"<<endl;
    cin >>n>>x>>m;
    int mat[n][x][m];
    cout <<"Enter elements"<<endl;


    int*** mas3d=new int**[n];
    int i,j,k;
 
    for(i=0;i<n;i++) mas3d[i]=new int*[x];
 
    for(i=0;i<n;i++)
        for(j=0;j<x;j++) mas3d[i][j]=new int[m];
 
    for(i=0;i<n;i++)
        for(j=0;j<x;j++)
            for(k=0;k<m;k++)
            cin >> mas3d[i][j][k];
 





    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < x; ++j){
    //         for(int k = 0; k < m; ++k)
    //         {
    //             cin >>mat[i][j][k];
    //         }
    //     }
    // }
    // cout <<endl;
    int arr[n*x*m];
    int y = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < x; ++j){
            for(int k = 0; k < m; ++k)
            {
                arr[y] = mas3d[i][j][k];
                ++y;   
            }
        }
    }
    for(int i = 0; i < n*x*m; ++i){
        cout <<arr[i]<<"   ";
    }
}