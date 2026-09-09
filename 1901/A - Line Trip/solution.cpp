#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int max_diff = a[0];  
        for (int i = 1; i < n; i++) {
            max_diff = max(max_diff, a[i] - a[i - 1]);
        }
 
        max_diff = max(max_diff, 2 * (x - a[n - 1]));
 
        cout << max_diff << '
';
    }
    return 0;
}