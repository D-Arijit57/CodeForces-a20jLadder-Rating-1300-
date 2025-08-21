#include<bits/stdc++.h>

using namespace std;

int main(){
    int t ;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int>arr;
        for(int i = 0 ;  i<n ; i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int cnt = 0 ;
        for(int i = 0 ; i<n ; i++){
            if(arr[i] == k){
                cnt = 1;
                break;
            }
        }
        if(cnt == 1) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}