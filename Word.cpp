#include<bits/stdc++.h>

using namespace std;

int main(){
 string s ;
 cin>>s;
 int uppercount = 0 , lowercount = 0;
 for(int i = 0 ; i<s.length() ; i++ ){
    if(s[i] < 97){
        uppercount++;
    }
    else lowercount++;
 }
 if(uppercount > lowercount){
    for(int i = 0 ; i<s.length() ; i++){
        if(s[i] >= 97){
            s[i] = s[i] - 32; // difference of a alphabet's uppercase and lowercase ASCII value is 32 
        }
    }
 }
 else{
    for(int i = 0 ; i<s.length() ; i++){
        if(s[i] < 97){
            s[i] = s[i] + 32;
        }
    }
 }
 cout<<s<<'\n';
}