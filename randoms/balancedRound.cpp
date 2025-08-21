#include<bits/stdc++.h>
using namespace std;
 // Balanced Round :
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        vector<int>arr;
        for(int i = 0 ; i < n ; i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin() , arr.end());
        int cnt = 1 ,  bestConfiguration = 1;
        int index = 1;
        while(index<n){
            if(abs(arr[index] - arr[index-1]) > k){
                bestConfiguration = max(cnt,bestConfiguration);
                cnt = 1;
            }
            else cnt++;

            index++;
        }
        bestConfiguration = max(cnt,bestConfiguration);
        cout<<n-bestConfiguration<<endl;
    }
}