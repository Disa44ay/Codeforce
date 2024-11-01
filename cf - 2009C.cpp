#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long moves_x = (x + k - 1) / k;
        long long moves_y = (y + k - 1) / k;

        long long total_moves = moves_x + moves_y;
        cout << moves_x << " " << moves_y << " " << total_moves <<endl;

//        long long extra_moves = max(moves_x, moves_y) - 1;
//
//        long long final_moves = total_moves + extra_moves;

//        cout << final_moves << endl;
    }

    return 0;
}
