#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long x = 0;
        vector<int>arr(n);
        for(int i = 0 ; i<n ; i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        for(int &i : arr){
            cin>>i;
            x^=i;
        }
        if(x == 0){
            cout<<1<<endl;
            cout<<1<<' '<<n<<endl;
        }
        else if (n % 2 == 0){
            cout<<2<<endl;
            cout<<1<<' '<<n<<endl;
            cout<<1<<' '<<n<<endl;
        }
        else {
            bool f = false;
            for(int i = 0 ; i<n ; i++){
                x = arr[i];
                int j = i + 1;
                for(;j<n; j++){
                    x ^= arr[j];
                    if(x == 0 && (j-i)%2 == 0){
                        f = true;
                        break;
                    }
                }
                if(f){
                    if(i == 0){
                        cout<<3<<endl;
                        cout<<1<<' '<<j+1<<endl;
                        cout<<j+2<<' '<<n<<endl;
                        cout<<j+2<<' '<<n<<endl;
                    }
                    else {
                        cout<<5<<endl;
                        cout<<1<<' '<<i<<endl;
                        cout<<1<<' '<<i<<endl;
                        cout<<i+1<<' '<<j+1<<endl;
                        cout<<j+1<<' '<<n<<endl;
                        cout<<j+2<<' '<<n<<endl;
                    }
                }
            }
        }

    }
}