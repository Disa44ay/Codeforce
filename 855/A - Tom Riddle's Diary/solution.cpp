#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    unordered_map<string, bool> a;
 
    for (int i = 0; i < t; i++) {
        string name;
        cin >> name;
 
        if (a[name]) {
            cout << "YES
";
        } else {
            cout << "NO
";
            a[name] = true;
        }
    }
 
    return 0;
}