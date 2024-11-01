#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int c1 = 0; c2 = 0;

        int n = s.length();
        for(int i = 0; i < n; i++){
            if(s[i] == '('){c1++;}
            else if(s[i] == ')'){c2++;}
        }
        if(n / c1  == 2 || n / c2 == 2){cout << n / 2 << endl;}
        else if(c1 == c2+1 || c1 + 1 == c2){{cout << n / 2 + 2 << endl;}
    }
    return 0;
}
