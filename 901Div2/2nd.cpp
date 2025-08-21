#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>a1,vector<int>a2,int n,int k){
    if(a1.size() == 1 and a2.size() == 1) {
        if(k == 1 and a1[0] > a2[0]) {
            cout<<a1[0]<<'\n';
            return;
        }
        }
        if(k % 2 != 0){
            swap(*max_element(a2.begin() , a2.end()) , *min_element(a1.begin(),a1.end()));
        }   
        int sum = 0;
        for(int i = 0 ; i<n ; i++){
            sum += a1[i];
        } 
        cout<<sum<<'\n';
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n , m , k;
        cin>>n>>m>>k;
        vector<int>a1;
        vector<int>a2;
        for(int i = 0 ; i<n ; i++){
            int temp;
            cin>>temp;
            a1.push_back(temp);
        }
        for(int i = 0; i<m ; i++){
            int temp;
            cin>>temp;
            a2.push_back(temp);
        }
      solve(a1,a2,n,k);
    }
    
}