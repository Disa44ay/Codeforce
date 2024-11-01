#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long a = 0;

        long long l, r, p;
        if (n % 2 == 0) {
            l = n;
        } else {
            l = n - 1;
        }

        r = (k - 1) / (l / 2 + 1);
        p = (k - 1) % (l / 2 + 1) + 1;

        a = 2 * p + r;

        cout << a - 1 << endl;
    }

    return 0;
}
