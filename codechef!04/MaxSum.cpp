#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i= 0; i<n ; i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin() , arr.end());
        int sum = 0 ; 
        for(int i = 0 ; i <n ; i++){
            sum += arr[i];
        }
        if(arr[0] ==  arr[n-1]) {
            cout<<sum<<'\n';
        }
        else {
        
        }
    }
}

