#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;

    map<long long, int> s_counts;
    for (int i = 0; i < n; ++i) {
        long long s_val;
        cin >> s_val;
        long long r = s_val % k;
        long long key = min(r, (k - r) % k);
        s_counts[key]++;
    }

    map<long long, int> t_counts;
    for (int i = 0; i < n; ++i) {
        long long t_val;
        cin >> t_val;
        long long r = t_val % k;
        long long key = min(r, (k - r) % k);
        t_counts[key]++;
    }

    if (s_counts == t_counts) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
