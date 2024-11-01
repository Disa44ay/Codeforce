#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a == b) {
        cout << "1" << endl;
        return 0;
    }

    int count = 0;

    while (a <= b) {
        a = a * 3;
        b = b * 2;
        count++;

        if (a > b) {
            cout << count << endl;
            return 0;
        }
    }

    return 0;
}
