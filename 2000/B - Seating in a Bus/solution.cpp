#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        set<int> seen;
        bool valid = true;
 
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                if (seen.find(a[i] - 1) == seen.end() && seen.find(a[i] + 1) == seen.end()) {
                    valid = false;
                    break;
                }
            }
            seen.insert(a[i]);
        }
 
        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}