#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        vector<pair<long , long>> ans;
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
            arr[i] = arr[i] % k ;
            if(arr[i] == 0){
                arr[i]+=k;
            }
            ans.push_back({-arr[i],i+1});
        }
        sort(ans.begin(),ans.end());
        for(auto it : ans){
            cout<<it.second<<" ";
        }
        cout<<endl;
    }
}