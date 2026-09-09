#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, sum = 0, sumWin = 0, count = 0;
 
    cin >> n;
 
    int a[n];
 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
 
    sort(a, a + n, greater<int>());
 
    int i = 0;
 
    while(sumWin <= sum / 2) {
        sumWin += a[i];
        i++;
        count++;
    }
 
    cout << count;
 
    return 0;
}