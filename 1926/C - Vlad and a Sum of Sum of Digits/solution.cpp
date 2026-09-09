#include <bits/stdc++.h>
using namespace std;
 
int sum_of_digits(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
 
int main() {
    const int MAX = 200007;
    vector<int> res(MAX, 0);
    
    for (int i = 1; i < MAX; i++) {
        res[i] = res[i - 1] + sum_of_digits(i);
    }
    
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << res[x] << '
';
    }
    
    return 0;
}