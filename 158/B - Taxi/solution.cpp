#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, count = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++) {
        if(a[i] == 1) count1++;
        else if(a[i] == 2) count2++;
        else if(a[i] == 3) count3++;
        else if(a[i] == 4) count4++;
    }
    
    count += count4;
    
    count += count3;
    if(count1 >= count3) {
        count1 -= count3;
    } else {
        count1 = 0;
    }
    
    count += count2 / 2;
    if(count2 % 2 == 1) {
        if(count1 >= 2) {
            count++;
            count1 -= 2;
        } else if(count1 == 1) {
            count++;
            count1--;
        } else {
            count++;
        }
    }
    
    count += count1 / 4;
    if(count1 % 4 != 0) {
        count++;
    }
    
    cout << count << endl;
    
    return 0;
}