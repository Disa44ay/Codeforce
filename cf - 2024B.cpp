#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend()); // sort in descending order
        long long sum = 0;
        int presses = 0;
        for(int i = 0; i < n; i++) {
            while(a[i] > 0 && k > 0) {
                a[i]--;
                k--;
                presses++;
            }
            if(k == 0) {
                break;
            }
        }

        cout << presses << endl;
    }
    return 0;
}
