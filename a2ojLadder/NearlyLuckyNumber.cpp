#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    string s = to_string(n);
    int cnt = 0;
    for(int i= 0; i<s.length() ; i++){
        if(s[i] == '4' or s[i] == '7'){
            cnt++;
        }
    }
    if(cnt == 4 or cnt == 7) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}