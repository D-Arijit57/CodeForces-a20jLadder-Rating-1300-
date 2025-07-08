#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Create a sorted copy of the array
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
    
    // Find the leftmost position where array differs from sorted version
    int left = 0;
    while (left < n && a[left] == sorted_a[left]) {
        left++;
    }
    
    // If array is already sorted
    if (left == n) {
        cout << "yes" << endl;
        cout << "1 1" << endl;
        return 0;
    }
    
    // Find the rightmost position where array differs from sorted version
    int right = n - 1;
    while (right >= 0 && a[right] == sorted_a[right]) {
        right--;
    }
    
    // Check if reversing the segment [left, right] makes the array sorted
    vector<int> temp = a;
    reverse(temp.begin() + left, temp.begin() + right + 1);
    
    if (temp == sorted_a) {
        cout << "yes" << endl;
        cout << left + 1 << " " << right + 1 << endl;  // Convert to 1-based indexing
    } else {
        cout << "no" << endl;
    }
    
    return 0;
}
