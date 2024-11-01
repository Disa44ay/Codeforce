#include <bits/stdc++.h>
using namespace std;

bool allDigitsAre4Or7(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if (n % 4 == 0 || n % 7 == 0 || allDigitsAre4Or7(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
