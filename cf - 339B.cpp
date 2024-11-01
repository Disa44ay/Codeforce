#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    vector<long long> a(m);

    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    long long count = 0;

    count = a[0] - 1;

    for (int i = 0; i < m - 1; i++) {
        if (a[i + 1] >= a[i]) {
            count += a[i + 1] - a[i];
        } else {
            count += n - a[i] + a[i + 1];
        }
    }

    cout << count << endl;
    return 0;
}
