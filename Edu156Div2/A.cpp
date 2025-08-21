#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n < 7) {
        cout<<"NO"<<'\n' ;
        return;
    }
        int sum = 0;
        int a ,  x;
        if(n % 3 == 0){
            a = (n/3);
            int y = n - a;
            if(y >= 10){
                if( y > 8){
                    y =  10 - 8l;
                }
            }
        }
        else{
            a = (n%3);
            x = n-1;
            int b = x/2;
            int c = (x - b);
            sum += a+b+c;
        }
        if(sum ==  n) {
        cout<<"YES"<<'\n';
        cout<<a<<" "<<b<<" "<<c<<'\n';
        }
        else cout<<"NO"<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
}