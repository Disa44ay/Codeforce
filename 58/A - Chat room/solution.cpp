#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    getline(cin, s);
    int n = s.length();
 
    int h = -1, e = -1, l1 = -1, l2 = -1, o = -1;
 
    for (int i = 0; i < n; i++) {
        if (h == -1 && s[i] == 'h') {
            h = i;
        } else if (h != -1 && e == -1 && s[i] == 'e') {
            e = i;
        } else if (h != -1 && e != -1 && l1 == -1 && s[i] == 'l') {
            l1 = i;
        } else if (h != -1 && e != -1 && l1 != -1 && l2 == -1 && s[i] == 'l') {
            l2 = i;
        } else if (h != -1 && e != -1 && l1 != -1 && l2 != -1 && o == -1 && s[i] == 'o') {
            o = i;
        }
    }
 
    if (h != -1 && e != -1 && l1 != -1 && l2 != -1 && o != -1 && h < e && e < l1 && l1 < l2 && l2 < o) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}