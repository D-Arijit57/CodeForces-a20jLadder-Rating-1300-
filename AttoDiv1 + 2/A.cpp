#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int t = -1;
    bool zero = false;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 0) {
            zero = true;
        }
        if (a[i] > 0 && t == -1) {
            t = a[i];
        }
    }
    if (zero) {
        cout << "NO\n";
        return;
    }
    if (t == -1) {
        cout << "YES\n";
        return;
    }
    for (int val : a) {
        if (val > 0 && val != t) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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