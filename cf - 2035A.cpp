#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long total_r, total_c, leave_r, leave_c;
        cin >> total_r >> total_c >> leave_r >> leave_c;

        long long int a = total_r - leave_r;
        long long int b = total_c - leave_c;
        long long int sum = (a * (total_c - 1)) + b + (a * total_c);

        cout << sum << endl;
    }
    return 0;
}
