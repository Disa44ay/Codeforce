#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();

        vector<int> a;

        while (n--) {
            string s;
            getline(cin, s);

            for (int i = 0; i < s.length(); i++) {
                if (s[i] == '#') {
                    a.push_back(i + 1);
                }
            }
        }

        for (int i = a.size() - 1; i >= 0; i--) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
