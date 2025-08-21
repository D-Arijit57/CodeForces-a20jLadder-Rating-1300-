#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector< pair < int , int > >v;
        for(int i = 0 ; i < n ; i++){
            int a , b;
            cin>>a>>b;
            v[i] = make_pair(a, b);
        }
        int ans = 0;
        sort(v.begin() , v.end());
    for(auto it : v){
        int currentAnswer = it.first + (it.second + 1) / 2 - 1;
        ans = min(ans , currentAnswer);
    }
    cout<<ans<<"\n";
    }  
}