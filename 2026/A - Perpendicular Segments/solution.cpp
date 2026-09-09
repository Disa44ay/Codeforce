#include<bits/stdc++.h>
using namespace std;
 
int t, x, y, k, m;
 
int main() {
    cin >> t;
    while (t--) {
        cin >> x >> y >> k;
        m = min(x, y);
        cout << "0 0 " << m << " " << m << "
";
        cout << "0 " << m << " " << m << " 0
";
    }
    return 0;
}