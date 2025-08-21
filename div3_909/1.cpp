#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    if( n % 3  == 0) {
        cout<<"Second"<<'\n';
         return;
    }
   else if (n % 3 != 0){
    int quot =  n % 3;
    int newn = (n + quot) - 2;
    if(newn % 3 == 0){
        cout<<"First"<<'\n';
        return;
    }
   }
   else {
    cout<<"Second"<<'\n';
    return;
   } 
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
       solve(n);
    }
    
}