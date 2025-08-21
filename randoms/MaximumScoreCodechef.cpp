#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
		cin>>n;
		int comp = ((n) / 2);
	    vector<int>a;
	    if(a.size() == 1){
	        cout<<a[0]<<'\n';
	    }
		else{
	    for(int i = 0 ;  i <= comp ; i++){
	        int temp = a[i] - a[i+1];
	        a.erase(a.begin()+i);
	        a.push_back(temp);
	    }
	    int maxi = *max_element(a.begin() , a.end());
	    cout<<maxi<<'\n';
		}
	    
	}
	return 0;
}
