#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int a[n];

        for (long long int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) {
            cout << 1 << endl;
        } else {
            vector<long long int> b;
            for (long long int i = 0; i < n - 1; i++) {
                long long int x = a[i + 1] - a[i];
                b.push_back(x);
            }

            sort(b.begin(), b.end());
            b.erase(unique(b.begin(), b.end()), b.end());

            if (b.size() >= 2) {
                cout << b[b.size() - 2] << endl;
            } else {
                cout << b[0] << endl;
            }
        }
    }
    return 0;
}
