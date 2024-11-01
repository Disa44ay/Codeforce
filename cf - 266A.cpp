#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    string s;
    getline(cin, s);

    int count = 0;

    for (int i = 0; i < s.length() - 1; ) {
        if (s[i] == s[i + 1]) {
            s.erase(i, 1);
            count++;
        } else {
            i++;
        }
    }

    cout << count << endl;
    return 0;
}
