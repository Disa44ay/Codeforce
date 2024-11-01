//#include <iostream>
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t;
//
//    while (t--) {
//        int n;
//        cin >> n;
//
//        int sum = 0;
//        for (int i = 1; i <= n; ++i) {
//            int num = i;
//            while (num > 0) {
//                sum += num % 10;
//                num /= 10;
//            }
//        }
//
//        cout << sum << endl;
//    }
//
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, i, sum = 0;
    cin >> n;
    if(n <= 9){
        sum = n * (n+1)/2;
        cout << sum << endl;
    }
    else if(n > 9){
       int i = n - 9;
       sum = i * (i+1)/2;
       cout << sum + 45 << endl;
       }
//else if(n > 9){
//        sum = 45;
//
//        for(i = 10; i <= n; i++) {
//            sum += i % 10;
//        }
//
//        cout << sum << endl;
//    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
