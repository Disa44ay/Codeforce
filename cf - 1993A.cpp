#include <bits/stdc++.h>
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

        int count = 0;
        int count_q = 0;

        if (n == 1) {
            int count_n1 = 0;
            if (s[0] == 'A') count_n1++;
            else if (s[0] == 'B') count_n1++;
            else if (s[0] == 'C') count_n1++;
            else if (s[0] == 'D') count_n1++;

            if (count_n1 >= 3) {
                cout << "3" << endl;
            } else {
                cout << count_n1 << endl;
            }
            continue;
        }

        vector<int> last_pos(4, -1);

        for (int i = 0; i < n; ++i) {
            if (s[i] == '?') {
                count_q++;
            } else if (s[i] == 'A') {
                last_pos[0] = i;
            } else if (s[i] == 'B') {
                last_pos[1] = i;
            } else if (s[i] == 'C') {
                last_pos[2] = i;
            } else if (s[i] == 'D') {
                last_pos[3] = i;
            }

            for (int j = 0; j < 4; ++j) {
                if (last_pos[j] != -1) {
                    int distance = i - last_pos[j];
                    if (distance > 3 && distance < 8) {
                        count++;
                    }
                }
            }
        }

        if (count_q == n) {
            cout << "0" << endl;
        } else {
            cout << count << endl;
        }
    }

    return 0;
}
