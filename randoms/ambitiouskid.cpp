#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i = 0 ; i<n ; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin() , arr.end());
    if(arr.size() == 1) {
        arr[0] = abs(arr[0]);
        cout<<arr[0];
    }
    else{
        for(int i = 0  ; i<n ; i++){
           if(arr[i]<0) arr[i] = arr[i] * -1;
        }
        int ans = *min_element(arr.begin() , arr.end());
        cout<<ans;
    }
}