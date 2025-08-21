#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long len,n;
        cin>>len>>n;
        if(n % 8 == 0) cout<<n<<'\n';
        if(n % 8 != 0) {
            while(true){
                string sn = to_string(n);
                for(int i = 0 ; i<n ; i++){
                    if(sn[i] == '0'){
                        sn[i] = sn[i] + '1';
                    }
                
                }
                if(n % 8 == 0) {
                    cout<<sn<<'\n';
                    break;
            }
            else  sn = sn + '1';
        }
    }
}
}