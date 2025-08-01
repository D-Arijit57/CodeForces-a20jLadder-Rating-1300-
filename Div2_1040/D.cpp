#include <bits/stdc++.h>
#define int long long
using namespace std;
struct BIT {
    int n;
    vector<int> f;
    BIT(int n = 0): n(n), f(n + 1, 0) {}
    void init(int _n) {
        n = _n;
        f.assign(n + 1, 0); 
    }
    void upd(int i) {
        for (; i <= n; i += i & -i) {
            f[i]++;
        }
    }
    int query(int i) {
        int s = 0;
        for (; i > 0; i -= i & -i) {
            s += f[i];
        }
        return s;
    }
};

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
        }
        vector<int> invr(n + 1), gl(n + 1);
        BIT bit(n);
        long long invp = 0;
        bit.init(n);
        for (int i = n; i >= 1; i--) {
            invr[i] = bit.query(p[i] - 1);
            invp += invr[i];
            bit.upd(p[i]);
        }
        bit.init(n);
        for (int i = 1; i <= n; i++) {
            gl[i] = (i - 1) - bit.query(p[i]);
            bit.upd(p[i]);
        }
        long long sum_neg = 0;
        for (int i = 1; i <= n; i++) {
            long long D = (n - i) - invr[i] - gl[i];
            if (D < 0) {
                sum_neg += D;
            }
        }
        
        long long ans = invp + sum_neg;
        cout << ans << "\n";
    }

    return 0;
}
