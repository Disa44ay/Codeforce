#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string a = "I hate";
    string b = "I love";
    if(n == 1){
        cout << a << " it";
    }
    if(n % 2 == 0){
        for(int i = 0; i < n/2; i++){
            cout << a;
            if(i < n/2){
                cout << " that " << b;
            }
            if( i == n/2 - 1){
                cout << " it";
                break;
            }
            cout << " that ";
        }
    }
    if(n == 3){
        cout << a << " that " << b << " that " << a << " it";
        return 0;
    }
    if(n % 2 != 0){
        for(int i = 0; i < n - 2; i++){
            cout << a;
            if(i < n / 2){
                cout << " that " << b << " that ";
            }
            if(i == n/2){
                cout << " it";
                break;
            }
        }

    }
    return 0;

}
