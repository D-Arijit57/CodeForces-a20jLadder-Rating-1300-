#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        int ans = (x/y);
        if(ans >= 20) cout<<20<<'\n';
        else cout<<floor(ans)<<'\n';
    }
}