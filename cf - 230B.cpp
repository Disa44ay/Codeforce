#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        long long count = 1;
        for (int j = 1; j <= a[i]/2; j++) {
            if (a[i] % j == 0) {
                count++;
            }
            if (count > 3) {
                break;
            }
        }
        if (count == 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
