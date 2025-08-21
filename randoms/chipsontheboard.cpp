#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        vector<int>b;
        for(int i = 0 ; i<n ; i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        for(int i = 0 ; i<n ; i++){
            int temp;
            cin>>temp;
            b.push_back(temp);
        }
        int sum = 0;
        if(a.size() == 1 and b.size() == 1) cout<<a[0]+b[0]<<'\n';
        else {
           for(int i = 0; i<n ; i++){
            sum += a[0] + b[i];
        }
        cout<<sum<<'\n';
        }

        }
        
}