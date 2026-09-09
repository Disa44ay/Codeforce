#include <bits/stdc++.h>
using namespace std;
 
const int LIMIT = 1000001;
set<long long> primeSquares;
 
void precompute() {
    vector<bool> isPrime(LIMIT, true);
    isPrime[0] = isPrime[1] = false;
 
    for (int i = 2; i * i < LIMIT; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < LIMIT; j += i) {
                isPrime[j] = false;
            }
        }
    }
 
    for (int i = 2; i < LIMIT; i++) {
        if (isPrime[i]) {
            primeSquares.insert((long long)i * i);
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    precompute();
 
    long long n;
    cin >> n;
    long long a[n];
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    for (int i = 0; i < n; i++) {
        if (primeSquares.count(a[i])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}