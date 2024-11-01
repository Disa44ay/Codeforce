#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, x;
    char c, q;
    cin >> a; cin >> c; cin >> b; cin >> q; cin >> x;

    if(c ==  '+'){
        int y = a + b;
        if (a + b == x){cout << "Yes" << endl;}
        else{
            cout << y << endl;
        }
    }
    else if(c ==  '-'){
        int y = a - b;
        if (a - b == x){cout << "Yes" << endl;}
        else{
            cout << y << endl;
        }
    }
    else if(c ==  '*'){
        int y = a * b;
        if (a * b == x){cout << "Yes" << endl;}
        else{
            cout << y << endl;
        }
    }

return 0;
}

