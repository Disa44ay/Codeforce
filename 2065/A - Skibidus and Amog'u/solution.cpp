#include<bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
 
    int t;
    cin >> t;
    cin.ignore();
 
    while (t--) {
        string s;
        getline(cin, s);
 
        int n = s.length();
 
        if (n >= 2) {
            s = s.substr(0, n - 2);
        } else {
            s = "";
        }
 
        s += 'i';
 
        cout << s << "
";
    }
 
    return 0;
}