#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        long long int n, k;
        cin >> n >> k;
        long long int a[n];
        for (long long int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        vector<long long int> occurrences;
        long long int count = 1;

        for (long long int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                count++;
            } else {
                occurrences.push_back(count);
                count = 1;
            }
        }

        occurrences.push_back(count);

        sort(occurrences.begin(), occurrences.end(), greater<long long>());

        long long int sum = 0;


        for(int i = 0; i < k; i++) {
            sum += occurrences[i];
        }

        cout << sum << endl;
    }
    return 0;
}
