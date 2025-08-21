#include<bits/stdc++.h>
using namespace std;
// parity sort
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i = 0 ; i<n ; i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
      vector<int>arr2;
      for(int i = 0 ; i<n ; i++){
       arr2.push_back(arr[i]);
      }
      sort(arr.begin() , arr.end());
      bool b = true;
      for(int i = 0 ;i<n ; i++){
        if(arr[i] % 2 != arr2[i] % 2 ){
            b = false;
            break;
        }
      }
    if(b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    } 
}