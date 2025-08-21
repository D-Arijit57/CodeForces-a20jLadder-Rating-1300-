#include <bits/stdc++.h>
using namespace std;

struct Pair {
    long long s, l;
    int prev, next;
};

struct Gain {
    long long gain;
    int u, v;

    bool operator<(const Gain& other) const {
        if (gain != other.gain) {
            return gain < other.gain;
        }
        if (u != other.u) {
            return u < other.u;
        }
        return v < other.v;
    }
};

long long calculate_gain(const Pair& p1, const Pair& p2) {
    return 2 * max(0LL, max(p1.s, p2.s) - min(p1.l, p2.l));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n), b(n);
        vector<Pair> pairs(n);
        long long total_value = 0;

        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        for (int i = 0; i < n; ++i) {
            if (a[i] > b[i]) swap(a[i], b[i]);
            pairs[i] = {a[i], b[i], i - 1, i + 1};
            total_value += (b[i] - a[i]);
        }

        sort(pairs.begin(), pairs.end(), [](const Pair& p1, const Pair& p2) {
            if (p1.s != p2.s) return p1.s < p2.s;
            return p1.l < p2.l;
        });

        vector<int> p(n);
        iota(p.begin(), p.end(), 0);
        sort(p.begin(), p.end(), [&](int i, int j) {
            if (pairs[i].s != pairs[j].s) return pairs[i].s < pairs[j].s;
            return pairs[i].l < pairs[j].l;
        });
        
        vector<int> original_indices(n);
        for(int i=0; i<n; ++i) original_indices[p[i]] = i;

        set<Gain> gains;
        for (int i = 0; i < n - 1; ++i) {
            gains.insert({calculate_gain(pairs[i], pairs[i + 1]), i, i + 1});
        }

        vector<bool> active(n + 1, true);

        for (int round = 0; round < k; ++round) {
            if (gains.empty()) break;

            Gain best_move = *gains.begin();
            gains.erase(gains.begin());

            total_value += best_move.gain;

            int u_idx = best_move.u;
            int v_idx = best_move.v;

            active[u_idx] = false;
            active[v_idx] = false;

            int prev_u = pairs[u_idx].prev;
            int next_v = pairs[v_idx].next;

            if (prev_u != -1) {
                gains.erase({calculate_gain(pairs[prev_u], pairs[u_idx]), prev_u, u_idx});
            }
            if (next_v != n) {
                gains.erase({calculate_gain(pairs[v_idx], pairs[next_v]), v_idx, next_v});
            }

            if (prev_u != -1 && next_v != n) {
                pairs[prev_u].next = next_v;
                pairs[next_v].prev = prev_u;
                gains.insert({calculate_gain(pairs[prev_u], pairs[next_v]), prev_u, next_v});
            } else if (prev_u != -1) {
                pairs[prev_u].next = n;
            } else if (next_v != n) {
                pairs[next_v].prev = -1;
            }
        }
        cout << total_value << "\n";
    }
    return 0;
}