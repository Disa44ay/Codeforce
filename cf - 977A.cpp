#include <bits/stdc++.h>
using namespace std;

int main() {
    long long count = 0, n, k, d;
    cin >> n >> k;

    while (k > 0) {
        if (n % 10 == 0) {
            n = n / 10;
            count++;
            k--;
        } else {
            d = n % 10;
            if (d <= k) {
                count += d;
                k -= d;
                n -= d;
            } else {
                count += k;
                n -= k;
                k = 0;
            }
        }

//        if (n == 0) {
//            break;
//        }
    }

    cout << n << endl;
    return 0;
}
