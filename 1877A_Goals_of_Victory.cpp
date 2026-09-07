#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ara(n - 1);
        int m = 0, p = 0;
        for (int i = 0; i < n - 1; i++) {
            cin >> ara[i];
            if (ara[i] < 0)
                m += abs(ara[i]);
            else
                p += ara[i];
        }
        if (p > m)
            cout << "-" << p - m << "\n";
        else if (p < m)
            cout << m - p << "\n";
        else
            cout << 0 << "\n";
    }
 
    return 0;
}