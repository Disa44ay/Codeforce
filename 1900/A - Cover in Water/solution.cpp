#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, check = 0, time = 0;
        cin >> n;
        cin >> ws; // Consumes any leading whitespace
        string str;
        getline(cin, str);
 
        for (int i = 0; i < n; i++) {
            if (str[i] == '.' && i == (n - 1)) {
                check++;
                if (check >= 3) {
                    cout << "2
";
                    break;
                } else {
                    time += check;
                }
            } else if (str[i] == '.') {
                check++;
            } else {
                if (check >= 3) {
                    cout << "2
";
                    break;
                }
                time += check;
                check = 0;
            }
        }
        if (check < 3) {
            cout << time << "
";
        }
    }
    return 0;
}