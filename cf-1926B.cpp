#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

   for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(a[i][j]=='0'&&a[i][j-1]=='1'&&a[i+1][j]=='1'){
                    (cout << "TRIANGLE\n");
                    return;
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(a[i][j]=='0'&&a[i][j-1]=='1'&&a[i-1][j]=='1'){
                    (cout << "TRIANGLE\n");
            return;
            }
        }
    }
    cout << "SQUARE\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
