#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        for(int i = 0;  i<n ; i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        int ans = 0;
        for(int i = 0 ; i < a.size() ; i++){
            if(a[i] != a[i-1]){
                if(a[i] != a[i+1]){
                    ans = i+1;
                }
            }
        }
        cout<<ans<<'\n';
    }
    
}