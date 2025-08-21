#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i = 0 ; i<n ; i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int flag = 0;
        for(int i = 0 ; i<n ; i++){
            if(arr[i] > arr[i-1] || arr[i] == arr[i-1]) continue ;
            else if(arr[i] < arr[i-1]){ 
                flag = 1;
                break;
            }
            else flag = 1;
            break;
        }
        if(flag == 0){
            cout<<"YES"<<endl;
        }
        else if (flag == 1){
        int xr1 = 0 ;
        for(int i = 0 ; i <= n; i++){
            xr1 = xr1 ^ arr[i];
        }
        int res = n - xr1;
        if(res % 2 == 0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
        }
    }
}