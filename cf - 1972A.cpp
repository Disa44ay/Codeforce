#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, c = 0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (int i = 0 ; i < n; i++) {
            if (a[i] > b[i]) {
                k = i;
                for (int j = n - 1; j > k; j--) {
                    a[j] = a[j - 1];
                }
                a[k] = b[i];
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
