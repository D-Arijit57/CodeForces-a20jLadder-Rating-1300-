#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>arr;
        for(int i= 0 ; i<3 ; i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int n = arr.size();
        int flag = 0;
        for(int i = 0 ; i<n ; i++){
            for(int j = i+1 ; j<n ; j++){
                if(arr[j] + arr[i] >=10) {
                    flag = 1;
                    break;
                }
            }
            }
            if(flag == 1) {
                cout<<"YES"<<endl;
            }
            if(flag == 0){
             cout<<"NO"<<endl;
        }  
        }
    }
