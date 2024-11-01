#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> a(n);
    vector<long long> b;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0) {
            b.push_back(a[i]);
        }
    }

    sort(b.begin(), b.end(), greater<long long>());

    long long sum = 0;


    for (int i = 0; i < min(k, (long long)b.size()); i++) {
        sum += b[i];
    }

    cout << sum << endl;
    return 0;
}
