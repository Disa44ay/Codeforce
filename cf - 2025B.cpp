#include <iostream>
#include <cmath>
using namespace std;

const long long MOD = 1000000007;

long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;

    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    long long a[t], b[t];
    for (int i = 0; i < t; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < t; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < t; i++) {
        long long result;
        if (b[i] < 4) {
            result = pow(2, b[i]);
        } else {
            result = mod_exp(2, b[i], MOD);
        }
        cout << result << endl;
    }

    return 0;
}
