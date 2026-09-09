#include <bits/stdc++.h>
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
 
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            int diff = abs(a[i] - a[i + 1]);
            if (diff == 5 || diff == 7) {
                count++;
            }
        }
 
        if (count == n-1) {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}