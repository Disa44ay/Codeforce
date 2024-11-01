#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int l, r;
        cin >> l >> r;

        if (l > r) {
            swap(l, r);
        }

        long long int sum_r = (r * (r + 1)) / 2;
        long long int sum_l = ((l - 1) * l) / 2;
        long long int sum = sum_r - sum_l;

        cout << sum << endl;
    }
    return 0;
}
