#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5 , m = 5;
    int matrix[n][m];
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            cin>>matrix[i][j];
        }
    }
    int row = 0 , col = 0;
    for(int i = 0 ; i<n ; i++){
        for(int j = 0; j<m ; j++){
            if(matrix[i][j] == 1){
                row = i;
                col = j;
            }
        }
    }
    int result = abs(2 - row) + abs(2 - col);
    cout<<result<<'\n';
}