#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if( n == 1 ) cout<<"YES"<<'\n';
        if(n % 2 == 0) cout<<"YES"<<'\n';
        if(n % 2 != 0) cout<<"NO"<<'\n';
    }
}