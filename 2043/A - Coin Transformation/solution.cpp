#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int ans = 1;
        if(n <= 3){
            cout << 1 << endl;
        }else{
            while(n > 3){
            n /= 4;
            ans *= 2;
        }
        cout << ans << endl;
        }
    }
    return 0;
}