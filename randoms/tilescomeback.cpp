#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr,int n, int k){
   int cnt = 0;
        if(arr[0] == arr[n-1]){
            for(int i = 0 ; i<n ; i++){
                if(arr[i] == arr[0]) cnt++;
                if(cnt % k == 0) {
                    cout<<"YES"<<endl;
                    return;
                }
            }
        cout<<"NO"<<endl;
        return;
        } 
        else{
            int s = -1; // first element 
            int e = -1; // last element 
            // checking for the first element
            int cnt = 0;
            for(int i  = 0 ; i<=n ; i++){
                if(arr[i] == arr[0]) cnt++;
                if(cnt % k == 0){ // if its occurance is equal to k
                    s = i; // store the index
                    break;
                }
            }
            cnt = 0;
            // checking  for the second element 
            for(int i  = n-1 ; i>=0 ; i--){
                if(arr[i] == arr[n-1]) cnt++;
                if(cnt % k == 0){ // if its occurance is equal to k 
                    e = i; // store the index 
                    break;
                }
            }
            if(s!=-1 and e!=-1 and s<e) {
                cout<<"YES"<<endl;
                return;
                }

            else {
                cout<<"NO"<<endl;
                return ;

            }
        }
}
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr;
        for(int i = 0 ; i<n ; i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
     solve(arr,n,k);
} 
}