#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    int a = s.size();
    while (t--)
    {
        for(int i  = 0 ; i<a ; i++){
            if(s[i-1] == 'B' and s[i] == 'G'){
                swap(s[i],s[i-1]);
                i++;
            }
        }
    }
    cout<<s<<'\n';
}