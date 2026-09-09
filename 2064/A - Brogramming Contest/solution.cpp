#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        int count = 0;
        bool has_ones = false;
 
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                has_ones = true;
            }
            if (i < n - 1) {
                if (s[i] == '1' && s[i + 1] == '0') {
                    count++;
                }
            }
        }
 
        if (!has_ones) {
            cout << "0
";
        } else {
            if (s[n - 1] == '1') {
                cout << 2 * count + 1 << "
";
            } else {
                cout << 2 * count << "
";
            }
        }
    }
    return 0;
}