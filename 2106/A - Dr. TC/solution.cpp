#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t ; cin >> t;
    cin.ignore();
    while(t--){
        int n;
        cin >> n;
        cin.ignore();
 
        string s;
        getline(cin, s);
 
        int z = 0, o = 0, res = 0;
 
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                z++;
            }else{
                o++;
            }
        }
 
        res = z + (n * o) - o;
        cout << res << endl;
    }
}
/*
 110 [010, 100, 111] n = 3; o = 2; z = 1; res = 1 + (3 * 2) - 3
*/