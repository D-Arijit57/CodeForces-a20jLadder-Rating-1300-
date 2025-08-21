#include<bits/stdc++.h>
using namespace std;
 // Array Coloring :
 // solution - > count the total number of odd numbers in the array if its is not divisible by 2 then we cannot color the array as mentioned if its even then we can
int main(){
    int t ;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int>a;
        for(int i = 0 ; i<n ; i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        int cnt = 0; 
        for(int i = 0 ; i<a.size() ; i++){
         if(a[i] % 2 != 0)  cnt++; 
        }
        if(cnt%2 == 0) {
            cout<<"YES"<<endl;
            }
        else cout<<"NO"<<endl;
    }
    
}