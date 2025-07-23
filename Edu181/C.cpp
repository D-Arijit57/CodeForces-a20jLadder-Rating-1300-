#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        long long t = r - l + 1;
        vector<long long> p = {2, 3, 5, 7};
        long long badcnt = 0;
        for (int mask = 1; mask < (1 << 4); mask++) {
            long long product = 1;
            int bits = 0;
            
            for (int i = 0; i < 4; i++) {
                if (mask & (1 << i)) {
                    product *= p[i];
                    bits++;
                }
            }
            long long cnt = r / product - (l - 1) / product;
            if (bits % 2 == 1) {
                badcnt += cnt;
            } else {
                badcnt -= cnt;
            }
        }
        
        long long goodcnt = t - badcnt;
        cout << goodcnt << "\n";
    }
    
    return 0;
}