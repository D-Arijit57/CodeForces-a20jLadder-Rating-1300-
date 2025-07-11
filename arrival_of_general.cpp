#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(vector<int>&arr, int n){
    int ans;
    int max_height = *max_element(arr.begin(), arr.end());
    int min_height = *min_element(arr.begin() , arr.end());
    // find the first occurence of the max element (leftmost)
    int maxInd = -1;
    for(int i = 0; i < n ; i ++){
        if(arr[i] == max_height){
            maxInd = i;
            break;
        }
    }
    // find the first occurence of the min element (rightmost)
    int minInd = -1;
    for(int i = n-1; i >= 0 ;i--){
        if(arr[i] == min_height){
            minInd = i;
            break;
        }
    }

    int swaps_for_min = abs(minInd - (n-1));
    int swaps_for_max = abs(maxInd - 0);
    ans = swaps_for_max + swaps_for_min;
    // if maxInd > minInd then they'll cross each other during the swapping movement and we need to avoid double counting 
    if(maxInd  > minInd) ans -= 1;
    cout<<ans<<endl;
}
int main(){
    long long n;
    cin>>n;
    vector<int>arr;
    for (int i = 0 ; i < n ; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp); 
    }
    solve(arr,n);
 return 0;
}