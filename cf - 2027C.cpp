#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int a[n + 1]; // Increase size by 1 to accommodate 1-based indexing
        for (long long int i = 1; i <= n; i++) { // Change loop to start from 1
            cin >> a[i];
        }
        long long int l = n; // Initialize l to n
        for (long long int i = n; i >= 1; i--) { // Loop from n to 1
            long long int x = l + 1 - i; // Calculate x
            if (a[i] == x) { // Check condition
                l = l + (i - 1); // Update l
            }
        }
        cout << l << endl; // Output the result
    }
    return 0;
}
