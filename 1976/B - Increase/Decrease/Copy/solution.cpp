#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m = n + 1;
        vector<int> a(n), b(m);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
 
        long long ans = 0, mi = 1e18;
        for (int i = 0; i < n; i++) {
            ans += abs(b[i] - a[i]);
            mi = min({mi, 0ll + abs(b[n] - a[i]), 0ll + abs(b[n] - b[i]), 1ll * (b[n] - a[i]) * (b[n] - b[i])});
        }
        mi = max(mi, 0ll);
 
        cout << ans + mi + 1 << endl;
    }
    return 0;
}