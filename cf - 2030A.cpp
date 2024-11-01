#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int min = INT_MAX;
        int max = INT_MIN;

        for(int i = 1; i < n; i++) {
            if(a[i] < min) {
                min = a[i];
            }
            if(a[i] > max) {
                max = a[i];
            }
        }
        int sum = 0;
        for(int i = 1; i < n; i++){
            sum += (max - min);
        }
        cout << sum << endl;
    }
    return 0;
}
