#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int x, prev;
    int currentLength = 0;
    int maxLength = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> x;
 
        if (i == 0) {
            prev = x;
            currentLength = 1;
            maxLength = 1;
        }
        else {
            if (prev <= x) {
                currentLength++;
            }
            else {
                currentLength = 1;
            }
 
            maxLength = max(maxLength, currentLength);
            prev = x;
        }
    }
 
    cout << maxLength;
 
    return 0;
}