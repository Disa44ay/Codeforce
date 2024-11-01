#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int a[n];
        for(long long i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<int> b;

        for(long long i = 0; i < n; i++) {
            bool isPresent = false;
            for(int j = 0; j < b.size(); j++) {
                if(b[j] == a[i]) {
                    isPresent = true;
                    break;
                }
            }
            if(!isPresent) {
                b.push_back(a[i]);
            }
        }

        for(int num : b){
            cout << num << " ";
        }
        cout << endl;

    }
    return 0;
}
