#include <bits/stdc++.h>
using namespace std;

bool isBad(const vector<int>& arr) {
    int n = arr.size();
    if (n < 5) return false;
    
    for (int i = 0; i <= n - 5; i++) {
        // Check strictly increasing
        bool increasing = true;
        bool decreasing = true;
        
        for (int j = i; j < i + 4; j++) {
            if (arr[j] >= arr[j + 1]) {
                increasing = false;
            }
            if (arr[j] <= arr[j + 1]) {
                decreasing = false;
            }
        }
        
        if (increasing || decreasing) {
            return true;
        }
    }
    return false;
}

string solve(vector<int> p) {
    int n = p.size();
    string result = "";
    vector<int> q;
    int left = 0, right = n - 1;
    
    for (int turn = 0; turn < n; turn++) {
        bool canTakeLeft = true;
        bool canTakeRight = true;
        
        // Try taking from left
        if (left <= right) {
            vector<int> tempQ = q;
            tempQ.push_back(p[left]);
            if (isBad(tempQ)) {
                canTakeLeft = false;
            }
        } else {
            canTakeLeft = false;
        }
        
        // Try taking from right
        if (left <= right) {
            vector<int> tempQ = q;
            tempQ.push_back(p[right]);
            if (isBad(tempQ)) {
                canTakeRight = false;
            }
        } else {
            canTakeRight = false;
        }
        
        // Choose the move
        if (canTakeLeft && !canTakeRight) {
            q.push_back(p[left]);
            result += 'L';
            left++;
        } else if (!canTakeLeft && canTakeRight) {
            q.push_back(p[right]);
            result += 'R';
            right--;
        } else if (canTakeLeft && canTakeRight) {
            // Both are safe, prefer left
            q.push_back(p[left]);
            result += 'L';
            left++;
        } else {
            // This shouldn't happen according to problem statement
            // But if it does, just take left
            q.push_back(p[left]);
            result += 'L';
            left++;
        }
    }
    
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        cout << solve(p) << "\n";
    }
    
    return 0;
}