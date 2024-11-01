
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        vector<long long> a(n);

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long> diff(n + 1, 0);

        while (m--) {
            char op;
            long long d, b;
            cin >> op >> d >> b;

            if (op == '+') {
                for (long long i = 0; i < n; i++) {
                    if (a[i] >= d && a[i] <= b) {
                        a[i]++;
                    }
                }
            } else if (op == '-') {
                for (long long i = 0; i < n; i++) {
                    if (a[i] >= d && a[i] <= b) {
                        a[i]--;
                    }
                }
            }

             long long curr = 0;
            long long max_val = LLONG_MIN;
            for (long long i = 0; i < n; i++) {
                curr += diff[i];
                max_val = max(max_val, a[i] + curr);
            }

            cout << max_val << " ";
        }
        cout << endl;
    }

    return 0;
}
