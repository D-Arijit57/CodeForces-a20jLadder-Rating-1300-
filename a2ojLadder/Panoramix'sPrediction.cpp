#include<bits/stdc++.h>

using namespace std;

bool is_prime(int a ){
    for(int i =2 ; i*i <= a ; ++i){
        if(a%i == 0){
            return false;
        }  
    }
    return true;
}
int main(){
    int n , m;
    cin>>n>>m;
    int temp = 0;
    for(int i = n+1 ; i ; ++i){
        if(is_prime(i)){
            
            temp = i;
            break;
        }
    }
    if( m == temp ) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

}