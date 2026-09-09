#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    cin.ignore();
 
    while (t--) {
        int n;
        cin >> n;
        cin.ignore(); 
 
        string s;
        getline(cin, s);
 
        bool found_digit_followed_by_char = false;
 
        for (int i = 0; i < n - 1; i++) {
            if (isalpha(s[i]) && isdigit(s[i+1])) {
                found_digit_followed_by_char = true;
                break;
            }
        }
 
        if (found_digit_followed_by_char) {
            cout << "NO" << endl;
            continue;
        }
 
        string sorted = s;
        sort(sorted.begin(), sorted.end());
 
        if (sorted == s) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}