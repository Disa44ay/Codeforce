#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 0, n, z;
    string b;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        getline(cin, b);

        if (b == "++X") {
            x = x + 1;
        } else if (b == "X++") {
            x = x + 1;
        } else if (b == "X--") {
            x = x - 1;
        } else if (b == "--X") {
            x = x - 1;
        } else {
            cout << "not a valid input, try again.";
            return 1;
        }
    }

    cout << x;
    return 0;
}
