#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i, count = 0;
    string a[27] = {"a", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

    cin >> t;
    for(i = 0; i < t; i++){
        cin >> n;
    }
    for(int i = 0; i < n; i++){
            if(n < 26 && count ==0){
           n = n-2;
           cout << "aa";
           cout << a[n];
           break;
        }else if(n < 26 && count == 1){
             n = n - 1;
           cout << "aa";
           cout << a[n];
           break;
        }
        else if(n < 26 && count == 2){
           cout << a[n];
           break;
        }
        else if(n == 26){
            cout << "aax";
            break;
        }
        else if(n > 26){
             cout << "z";
             n = n-26;
             count++;
        }
    }
    cout << endl;
}
