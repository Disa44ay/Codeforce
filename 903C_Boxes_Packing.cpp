#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
 
    map<int, int> freq;
    int max_count = 0;
 
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        freq[a]++;
        max_count = max(max_count, freq[a]);
    }
 
    cout << max_count << "\n";
    return 0;
}