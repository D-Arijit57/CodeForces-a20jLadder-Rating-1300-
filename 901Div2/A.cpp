#include<bits/stdc++.h>
using namespace std;
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
        if(a1.size() == 1 and a2.size() == 1) {
        if(k == 1 and a1[0] > a2[0]) cout<<a1[0]<<'\n';
        }
        if(k % 2 != 0){
            int maxelem = *max_element(a2.begin() , a2.end());
            a1.push_back(maxelem);
            a1.erase(a1.begin(),a1.begin()+0);
        }
        if(k%2 == 0){
        int sum = 0;
        for(int i = 0 ; i<n ; i++){
            sum += a1[i];
        }
        cout<<sum<<'\n';
        }
        int sum = 0;
        for(int i = 0 ; i<n ; i++){
            sum += a1[i];
        }
        cout<<sum<<'\n';
    }
    
}