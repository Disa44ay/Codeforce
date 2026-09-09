#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    cin.ignore();
 
    while(t--){
        int n, m, count = 0;;
        cin >> n >> m;
 
        int sum = 0;
        string s;
 
        for(int i = 0; i < n; i++){
            cin >> s;
            sum += s.length();
 
            if(sum <= m){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}