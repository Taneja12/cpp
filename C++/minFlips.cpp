#include <bits/stdc++.h>
using namespace std;

int minFlips(string s) {
    int n = s.length();
    
    // Counts for two possible patterns
    int flipsForPattern1 = 0; // For "010101..."
    int flipsForPattern2 = 0; // For "101010..."
    
    for (int i = 0; i < n; i++) {
        // Check for pattern "010101..."
        if (i % 2 == 0) {
            if (s[i] != '0') flipsForPattern1++;
        } else {
            if (s[i] != '1') flipsForPattern1++;
        }

        // Check for pattern "101010..."
        if (i % 2 == 0) {
            if (s[i] != '1') flipsForPattern2++;
        } else {
            if (s[i] != '0') flipsForPattern2++;
        }
    }
    
    // Return the minimum flips required for either pattern
    return min(flipsForPattern1, flipsForPattern2);
}

int32_t main() {
    string s;
    cin >> s;

    cout << minFlips(s) << endl;
}
