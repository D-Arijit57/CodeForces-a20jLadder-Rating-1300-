#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int total_excess = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                total_excess += a[i] - b[i];
            }
        }
        cout << total_excess + 1 << "\n";
    }
    
    return 0;
}