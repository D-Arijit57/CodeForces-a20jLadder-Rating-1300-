#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i = 0 ; i<n-1 ; i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    unordered_map<int,int>mpp;
    for(int i = 0 ; i<n ; i++){
        mpp[a[i]]++;
    }
    
}