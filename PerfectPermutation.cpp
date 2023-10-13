#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2 != 0){
        cout<<-1<<'\n';
    }
    else {
        int arr[n+1];
        for(int i = 1 ; i<=n ; i++){ // array initialized according to 2nd condition pi != 1
            arr[i] = i;
        }
        for(int i = 1 ; i<=n-1 ; i++){
            swap(arr[i],arr[i+1]) ;
            i++;// swap to follow the first conditon Ppi = i
        }
        for(int i = 1 ; i<=n ; i++){
            cout<<arr[i]<<" ";
        }
    }
    
}