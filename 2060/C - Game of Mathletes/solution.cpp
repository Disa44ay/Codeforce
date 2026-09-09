#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, count = 0;
        cin >> n >> k;
        vector<int> z(n);
 
        for (int i = 0; i < n; i++) {
            cin >> z[i];
        }
 
        sort(z.begin(), z.end());
 
        int left = 0, right = n - 1;
        while (left < right) {
            int sum = z[left] + z[right];
            if (sum == k) {
                count++;
                left++;
                right--;
            } else if (sum < k) {
                left++;
            } else {
                right--;
            }
        }
 
        cout << count << endl;
    }
    return 0;
}