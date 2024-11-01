#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int >a(n);
        int sum1 = 0;
        for(int i= 0; i< n; i++){
            cin >> a[i];
            sum1 += a[i];
            if(a[0] > k){cout << "NO" << "/n";break;}
        }
        int sum2 = 0;
        for(int i = 0; i< n;i++){
            cin >> a[i];
            if(a[i] < 0){
                a[i] = (a[i]*-1) * 2;
            }
        }


    }
}
