#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i =0; i <n; i++){
            cin >> a[i];
        }
        int x = 0, min = 999999999;
        for(int i = 0; i < n-1; i++){
            x = max(a[i], a[i+1]);
            if(x < min){
                min = x;
            }
        }
//        cout << x << endl;
        cout << min - 1 << endl;

    }
}
