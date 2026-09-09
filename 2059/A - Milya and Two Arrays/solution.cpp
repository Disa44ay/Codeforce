#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        set<int> a, b;
        int val;
 
        for (int i = 0; i < n; i++) {
            cin >> val;
            a.insert(val);
        }
 
        for (int i = 0; i < n; i++) {
            cin >> val;
            b.insert(val);
        }
 
 
        if(a.size() >= 3 || b.size() >= 3 || (a.size() == 2 && b.size() == 2)){
            cout << "YES" << endl;
        }else{
        cout << "NO" << endl;
        }
    }
    return 0;
}