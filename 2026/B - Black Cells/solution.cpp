#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        if (n == 1) {
            cout <<  1 << '
';
            continue;
        }
 
        if (n % 2 == 0) {
            sort(a.begin(), a.end());
            long long res = 0;
            for (int i = 0; i < n; i += 2) {
                res = max(res, a[i + 1] - a[i]);
            }
            cout << res << '
';
            continue;
        }
 
        long long ans = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            vector<long long> temp;
            for (int j = 0; j < n; j++) {
                if (j != i) temp.push_back(a[j]);
            }
            long long res = 0;
            for (int j = 0; j < temp.size(); j += 2) {
                res = max(res, temp[j + 1] - temp[j]);
            }
            ans = min(ans, res);
        }
 
        cout << ans << '
';
    }
    return 0;
}