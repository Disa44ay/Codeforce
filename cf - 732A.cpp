#include<bits/stdc++.h>
using namespace std;
int main() {
    int k, r;
    cin >> k >> r;
    int count = 1;

    while (true) {
        if ((k * count) % 10 == r || (k * count) % 10 == 0) {
            cout << count << endl;
            break;
        }
        count++;
    }

    return 0;
}
