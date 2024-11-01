#include<bits/stdc++.h>
using namespace std;

int main() {
    int count = 0, m[5][5] = {}, a[5][5] = {}, x, y;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> m[i][j];
            if (m[i][j] == 1) {
                x = i;
                y = j;
                if (x > 2) {
                    count += (x - 2);
                } else {
                    count += (2 - x);
                }
                if (y > 2) {
                    count += (y - 2);
                } else {
                    count += (2 - y);
                }
//                m[x][y] = 0;
//                x = 2;
//                y = 2;
//                m[x][y] = 1;
            }
        }
    }
    cout << count << endl;

//
//    cout << "new matrix:" << endl;
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 5; j++) {
//            cout << m[i][j] << " ";
//        }
//        cout << endl;
//    }

    return 0;
}
