#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        string a ,b;
        cin>>a>>b;
        int cnta = 0 , cntb = 0;
        for(int i = 0 ; i < a.length() ; i++){
            if(a[i] == b[i]) continue;
            if(a[i] == 'P' and b[i] == 'S') cntb++;
            if(a[i] == 'S' and b[i] == 'P') cnta++;
            if(a[i] == 'R' and b[i] == 'P') cntb++;
            if(a[i] == 'P' and b[i] == 'R') cnta++;
            if(a[i] == 'R' and b[i] == 'S') cnta++;
            if(a[i] == 'S' and b[i] == 'R') cntb++; 
        }
        if(cntb > cnta) cout<<abs(cntb-cnta)<<'\n';
        else cout<<0<<'\n';
        
    }
}