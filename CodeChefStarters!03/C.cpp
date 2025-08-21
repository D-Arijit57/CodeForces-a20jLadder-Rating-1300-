#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int a1,a2,a3,b1,b2,b3;
      cin>>a1>>a2>>a3>>b1>>b2>>b3;
      string s1 = to_string(a1);
      string s2 = to_string(a2);
      string s3 = to_string(a3);
      string s4 = to_string(b1);
      string s5 = to_string(b2);
      string s6 = to_string(b3);
      string alice = s1+s2+s3;
      string bob = s4+s5+s6;
      sort(alice.begin() , alice.end(), greater<char>());
      sort(bob.begin() , bob.end(), greater<char>());
      if(alice > bob) cout<<"Alice"<<'\n';
      if(bob > alice) cout<<"bob"<<'\n';
      else cout<<"Tie"<<'\n'; 
    }
}