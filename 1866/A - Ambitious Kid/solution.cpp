#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    int a[n];
 
    int s = INT_MAX;
    for(int i = 0;i < n;i++){
        cin >> a[i];
 
        if(abs(a[i]) < s){
            s = abs(a[i]);
        }
    }
 
    cout << s << endl;
 
    return 0;
}