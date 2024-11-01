#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        vector<int> arr;

        while (x > 0) {
            if (x % 2 == 1) {
                arr.push_back(1);
                x--;
            } else {
                arr.push_back(0);
            }

            x >>= 1;
        }

        cout << arr.size() << "\n";

        for (int i = 0; i < arr.size(); ++i) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
