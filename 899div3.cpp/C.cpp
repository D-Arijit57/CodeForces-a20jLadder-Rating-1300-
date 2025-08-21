#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;
    while(t--){
        long long n , k , x;
        cin>>n>>k>>x;
        long long sum = (k*(k+1))/2 , z = (n-k+1+n) * (k/2);
        if(sum >= x || x < z) cout<<"NO"<<'\n';
        else cout<<"YES"<<"\n";
    }
}