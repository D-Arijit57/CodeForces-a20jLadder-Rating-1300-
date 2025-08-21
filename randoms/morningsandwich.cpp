#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
     while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int d =  b+c;
        if(d<a){
            cout<<  d + (d+1) <<endl;
        }
        else cout<< a + (a - 1) <<endl;
    }
}