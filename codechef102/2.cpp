#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double x ;
        cin>>x;
        double y = 0.2 * x;
        cout<<ceil(100/y)<<'\n';
    }
}