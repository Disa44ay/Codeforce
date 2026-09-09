#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        long long ans = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            ans += a[i];
        }
        cout << ans - 2 * a[n-2] << endl;
    }
}