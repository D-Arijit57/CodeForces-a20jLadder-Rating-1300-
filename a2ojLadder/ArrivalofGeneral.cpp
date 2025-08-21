#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int>arr;
    for(int i = 0 ; i<n ; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int maxi = *max_element(arr.begin() , arr.end());
    int mini = *min_element(arr.begin() , arr.end());
    int cnt1 = 0 , cnt2 = 0;
    
     cout<<cnt1+cnt2<<'\n';
}