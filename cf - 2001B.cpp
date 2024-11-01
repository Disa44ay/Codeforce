#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<int> b;
        unordered_set<int> seen;

        for(int i = 0; i < n; i++){
            if(seen.find(a[i]) == seen.end()){
                b.push_back(a[i]);
                seen.insert(a[i]);
            }
        }

        for(int num : b){
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
