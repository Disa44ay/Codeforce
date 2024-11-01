#include<bits/stdc++.h>
using namespace std;

void solve(){
    int c = 0, d = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'A'){
            c++;
        }
        if(s[i] == 'B'){
            d++;
        }
    }
    if(c > d){
        cout << 'A' << endl;
    } else {
        cout << 'B' << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
