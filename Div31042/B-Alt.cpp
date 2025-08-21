#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    
    cin >> n;

    if (n % 2 != 0) { 
        int prefix_len = n - 1;
        for (int i = 0; i < prefix_len; ++i) {
            if ((i + 1) % 2 != 0) { 
                
                cout << -1 << " ";
            } else { 
                
                cout << 3 << " ";
            }
        }
        cout << -1 << '\n';
    } else { 
        if (n == 2) {
            
            cout << -1 << " " << 2 << 
            endl;
            return;
        }
        int prefix_len = n - 2;
        for (int i = 0; i < prefix_len; ++i) {
            if ((i + 1) % 2 != 0) { 
                
                cout << -1 << " ";
            } else { 
                
                cout << 3 << " ";
            }
        }
        // The last two elements
        
        cout << -1 << " " << 2 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    
    cin.tie(NULL);

    int t;
    
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}
