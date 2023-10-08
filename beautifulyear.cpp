#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;
    while(true){
        y += 1;
        int a = y/1000;
        int b = y/100 % 10;
        int c = y/10 % 10;
        int d = y%10;
        if(a!=b and a!=c and a!=d and b!=c and b!=d and c!=d){
            cout<<y;
            return 0;
        }  
    }
}