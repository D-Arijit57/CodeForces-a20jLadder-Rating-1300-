#include<bits/stdc++.h>
using namespace std;
// 100 / 25  =  4 --> 1/4
int main(){
    int n ;
    cin>>n;
    vector<int>arr;
    for(int i = 0 ; i<n ; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    float sum  = 0 ; 
    for(int i = 0 ; i < arr.size() ;  i++){
        sum += arr[i];
    }
    float ans = (sum / n);
    cout<<ans<<'\n';
}