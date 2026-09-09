#include <bits/stdc++.h>
#include <climits>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long int x = 0;
        long long int min = LLONG_MAX;
        for (int i = 0; i < n - 1; i++) {
            x = max(a[i], a[i + 1]);
            if (x < min) {
                min = x;
            }
        }
        cout << min - 1 << endl;
    }
}