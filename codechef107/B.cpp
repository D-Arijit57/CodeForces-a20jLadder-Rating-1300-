#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x , y , z;
        cin>>x>>y>>z;
        int doneday = 1440 * z;
        int totalmin = x * y;
        if(doneday < totalmin) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
}