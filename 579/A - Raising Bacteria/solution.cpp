#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, cnt = 0;
    cin >> n;
    while (n) {
        cnt += (n & 1);
        n >>= 1;
    }
    cout << cnt << endl;
    return 0;
}