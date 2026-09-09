#include <bits/stdc++.h>
using namespace std;
 
int t;
string s;
 
int main() {
    cin >> t;
    while (t--) {
        cin >> s;
        if (s[0] == '1' && s[1] == '0' &&
            (s[2] >= '2' || (s[2] == '1' && s[3] >= '0' && s[3] <= '9'))) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
    return 0;
}