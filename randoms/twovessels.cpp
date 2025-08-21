#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       float a,b,c;
        cin>>a>>b>>c;
        int dx = abs(a-b);
        c *= 2;
        int ans = (dx + c - 1)/c;
        cout<<ans<<'\n';
    }
}