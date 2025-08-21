#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        vector<int>arr;
        for(int i = 0 ; i<n ; i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        if(k > n) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
}