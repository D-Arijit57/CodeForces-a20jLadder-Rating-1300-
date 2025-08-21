#include<bits/stdc++.h>
using namespace std;
int main(){
    vector< vector< int > >matrix;
   for(int i = 1 ; i<=5 ; i++){
    for(int j = 1 ; j<=5 ; j++){
        cin>>matrix[i][j];
    }
   }
   int cnt = 0;
   int correctP = matrix[3][3];
   for(int i = 1 ; i<=5 ; i++){
    for(int j = 1 ; j<=5 ; j++){
        if(matrix[i][j] == 1) {
            if(matrix[i][0] < correctP ){
                i++;
                cnt++;
            }
            if(matrix[i][0] > correctP){
                i--;
                cnt++;
            }
            if(matrix[0][j] > correctP){
                j--;
                cnt++;
            }
            if(matrix[0][j] < correctP){
                j++;
                cnt++;
            }
            else continue;
        }
    }
    cout<<cnt<<endl;
   }
}