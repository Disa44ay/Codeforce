#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_c = 0;

        for (int i = 0; i < n; i++) {
            int count = 0;
            int x = a[i];
            for (int j = 0; j < n; j++) {
                if (a[j] == x) {
                    count++;
                }
            }
            if (count > max_c) {
                max_c = count;
            }
        }

        cout << n - max_c << endl;
    }
    return 0;
}
