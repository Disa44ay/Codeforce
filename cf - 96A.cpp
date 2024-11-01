#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count_0 = 0;
    int count_1 = 0;

    for (char c : s) {
        if (c == '0') {
            count_0++;
            count_1 = 0;
        } else {
            count_1++;
            count_0 = 0;
        }

        if (count_0 == 7 || count_1 == 7) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;FA4LR8>
    return 0;
}
