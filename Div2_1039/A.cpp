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
        int n, c;
        cin >> n >> c; 
        vector<long long> bags(n);
        for (int i = 0; i < n; i++) {
            cin >> bags[i];
        }
        int total_cost = 0;
        for (int step = 0; step < n; step++) {
            int best_idx = -1; 
            int min_cost = 2;  
            for (int i = 0; i < bags.size(); i++) {
                int cost = (bags[i] > c) ? 1 : 0;
                if (cost < min_cost || 
                   (cost == min_cost && (best_idx == -1 || bags[i] > bags[best_idx]))) {
                    min_cost = cost;
                    best_idx = i;
                }
            }
            total_cost += min_cost;
            bags.erase(bags.begin() + best_idx);
            for (int i = 0; i < bags.size(); i++) {
                bags[i] *= 2;
            }
        }
        cout << total_cost << "\n";
    }
    return 0;
}