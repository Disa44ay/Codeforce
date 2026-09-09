#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
 
        ll sum_j = 0;
        int j_min = INT_MAX, j_max = INT_MIN;
        int g_min = INT_MAX, g_max = INT_MIN;
 
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            sum_j += a;
            j_min = min(j_min, a);
            j_max = max(j_max, a);
        }
 
        for (int i = 0; i < m; i++) {
            int a;
            cin >> a;
            g_min = min(g_min, a);
            g_max = max(g_max, a);
        }
 
        sum_j -= j_min + j_max;
        
        if (k % 2 == 1) {
            sum_j += j_max + max(g_max, j_min);
        } else {
            if (j_min > g_max) {
                sum_j += g_min + j_min;
            } else {
                sum_j += min(j_max, g_max) + min(j_min, g_min);
            }
        }
 
        cout << sum_j << endl;
    }
    return 0;
}