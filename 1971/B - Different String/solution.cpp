#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    cin.ignore();
 
    while (t--) {
        string s;
        cin >> s;
 
        int l = s.length();
        if (l <= 1) {
            cout << "NO" << endl;
        } else {
            bool allSame = true;
            char x, y;
            for (int i = 0; i < l - 1; i++) {
                if (s[i] != s[i + 1]) {
                    x = i+1;
                    allSame = false;
                    break;
                }
            }
 
            if (allSame) {
                cout << "NO" << endl;
            } else {
                swap(s[x], s[x-1]);
                cout << "YES" << endl << s << endl;
            }
        }
    }
 
    return 0;
}