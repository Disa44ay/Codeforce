#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        int a[n], count = 1, counte = 1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        
        for (int i = 0; i < n - 1; i++) {
            if (a[i + 1] == a[i]) {
                count++;
            } else {
                break;
            }
        }
 
        int firstValue = a[0];
        int st = -1, ed = -1;
        for (int i = 1; i < n; i++) {
            if (a[i] != firstValue) {
                st = i;
                break;
            }
        }
 
        for (int i = n - 1; i > 0; i--) {
            if (a[i] == a[i - 1]) {
                counte++;
            } else {
                break;
            }
        }
 
        if (count == n) {
            cout << "0" << endl;
        } else if (a[0] == a[n - 1]) {
            for (int i = n - 2; i >= 0; i--) {
                if (a[i] != firstValue) {
                    ed = i + 1;
                    break;
                }
            }
            cout << ed - st << endl;
        } else {
            if (counte > count) {
                cout << n - counte << endl;
            } else {
                cout << n - st << endl;
            }
        }
    }
    return 0;
}