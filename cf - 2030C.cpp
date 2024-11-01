#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count1 = 0;
        int count0 = 0;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '1') {
                count1++;
            } else if(s[i] == '0') {
                count0++;
            }
        }

        if(count1 >= count0) {
            cout << "YES";
        } else {
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}
