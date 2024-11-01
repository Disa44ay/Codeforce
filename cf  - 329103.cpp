#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int count_e = 0, count_o = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                count_e++;
            } else {
                count_o++;
            }
        }

        if (n % 2 != 0) {
            cout << -1 << endl;
        } else {
            int d = max(count_e, count_o);
            int c = n / 2;
            cout << (d - c) * 2 << endl;
        }
    }

    return 0;
}
