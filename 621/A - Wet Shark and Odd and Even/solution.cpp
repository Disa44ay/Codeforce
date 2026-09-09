#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, count_odd = 0, min_index = -1;
    long long min_odd = LLONG_MAX, sum = 0;
 
    cin >> n;
    vector<long long> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
 
        if (a[i] % 2 != 0) {
            count_odd++;
            if (a[i] < min_odd) {
                min_odd = a[i];
                min_index = i;
            }
        }
    }
 
    if (count_odd % 2 != 0 && min_index != -1) {
        sum -= min_odd;
    }
 
    cout << sum << endl;
}