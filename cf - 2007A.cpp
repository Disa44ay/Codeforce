#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;


        int odd_count = (r + 1) / 2 - l / 2;
        int even_count = (r - l + 1) - odd_count;

//        cout << even_count << " " << odd_count << endl;
        int count = 0;


        while (odd_count >= 2 && even_count >= 1) {
            odd_count -= 2;
            even_count -= 1;
            count++;
        }


        cout << count << endl;
    }
    return 0;
}
