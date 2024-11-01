#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        set<int> seen;
        bool valid = true;

        for (int i = 0; i < n; i++) {
            if (i > 0) {
                if (seen.find(a[i] - 1) == seen.end() && seen.find(a[i] + 1) == seen.end()) {
                    valid = false;
                    break;
                }
            }
            seen.insert(a[i]);
        }

        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int t ; cin >> t;
//    while(t--){
//        int n;
//        cin >> n;
//        int a[n];
//        for(int i = 0; i <n; i++){
//            cin >> a[i];
//        }
//        int count = 1;
//        for(int i = 1; i < n ; i++){
//            for(int j = 0; j < i; j++){
//                int a = a[i] - 1;
//                int b = a[i] + 1;
//                if(a[j] == a || a[j] == b){
//                    i++;
//                    count++;
//                }else{
//                cout << "NO" << endl;
//                return 0;
//                }
//            }
//            if(count == n){
//                cout << "YES" << endl;
//                return 0;
//            }
//        }
//    }
//    return 0;
//}
