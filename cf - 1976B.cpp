#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m = n + 1;
        vector<int> a(n), b(m);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        long long ans = 0, mi = 1e18;
        for (int i = 0; i < n; i++) {
            ans += abs(b[i] - a[i]);
            mi = min({mi, 0ll + abs(b[n] - a[i]), 0ll + abs(b[n] - b[i]), 1ll * (b[n] - a[i]) * (b[n] - b[i])});
        }
        mi = max(mi, 0ll);

        cout << ans + mi + 1 << endl;
    }
    return 0;
}


//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//    int t;
//    cin >> t;
//    while(t--){
//        int n;
//        cin >> n;
//        int m = n+1, a[m], b[m];
//
//        for(int i = 0; i < n; i++){
//            cin >> a[i];
//        }
//        for(int i = 0; i < m; i++){
//            cin >> b[i];
//        }
//
//        int last = b[m-1];
//        int mini = 9999999, target = -1;
//
//        for(int i = 0; i < n; i++){
//            int diff = last - a[i];
//            if(mini >= diff){
//                mini = diff;
//                target = i;
//            }
//        }
//
//        a[n] = a[target];
//
//
////        for(int i = 0; i <= n; i++){
////            cout << a[i] << " ";
////        }
////        cout << endl;
//        int count = 1;
//        for(int i = 0; i < m; i++){
//            count += abs(a[i] - b[i]);
//        }
//        cout << count << endl;
//    }
//    return 0;
//}
