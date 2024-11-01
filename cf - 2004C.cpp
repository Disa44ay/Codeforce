#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int count = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                count++;
            }
        }

        sort(a.begin(), a.end(), greater<int>());

        int sumA = 0, sumB = 0;
        for (int i = 0; i < n; i += 2) {
            sumA += a[i];
        }
        for (int i = 1; i < n; i += 2) {
            sumB += a[i];
        }

        int d = sumA - sumB - k;

        cout << count << endl;
        if (count == n - 1) {
            cout << "1" << endl;
        } else if (d < 0) {
            cout << "0" << endl;
        } else {
            cout << d << endl;
        }
    }
    return 0;
}
