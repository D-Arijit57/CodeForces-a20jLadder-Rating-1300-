#include <bits/stdc++.h>
using namespace std;

bool isNotDifficult(const string& s) {
    return s.find("FFT") == string::npos && s.find("NTT") == string::npos;
}

string solve(string s) {
    if (isNotDifficult(s)) {
        return s;
    }
    sort(s.begin(), s.end());
    if (isNotDifficult(s)) {
        return s;
    }
    sort(s.begin(), s.end(), greater<char>());
    if (isNotDifficult(s)) {
        return s;
    }
    string f_chars = "", n_chars = "", t_chars = "", other_chars = "";
    
    for (char c : s) {
        if (c == 'F') f_chars += c;
        else if (c == 'N') n_chars += c;
        else if (c == 'T') t_chars += c;
        else other_chars += c;
    }
    vector<string> arrangements = {
        other_chars + f_chars + n_chars + t_chars,
        other_chars + t_chars + f_chars + n_chars,
        other_chars + n_chars + t_chars + f_chars,
        f_chars + other_chars + t_chars + n_chars,
        n_chars + other_chars + f_chars + t_chars,
        t_chars + other_chars + n_chars + f_chars
    };
    
    for (const string& arrangement : arrangements) {
        if (isNotDifficult(arrangement)) {
            return arrangement;
        }
    }
    string result = "";
    int f_idx = 0, n_idx = 0, t_idx = 0, o_idx = 0;
    while (f_idx < f_chars.length() || n_idx < n_chars.length() || 
           t_idx < t_chars.length() || o_idx < other_chars.length()) {
        
        if (o_idx < other_chars.length()) {
            result += other_chars[o_idx++];
        }
        if (f_idx < f_chars.length()) {
            result += f_chars[f_idx++];
        }
        if (o_idx < other_chars.length()) {
            result += other_chars[o_idx++];
        }
        if (n_idx < n_chars.length()) {
            result += n_chars[n_idx++];
        }
        if (o_idx < other_chars.length()) {
            result += other_chars[o_idx++];
        }
        if (t_idx < t_chars.length()) {
            result += t_chars[t_idx++];
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
        string s;
        cin >> s;
        cout << solve(s) << "\n";
    }
    
    return 0;
}