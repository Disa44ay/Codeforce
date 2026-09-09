#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    vector<int> a(n);
    int sum_s = 0, sum_d = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    int left = 0, right = n - 1;
    bool turn = true;
 
    while (left <= right)
    {
        if (a[left] > a[right]) {
            if (turn) sum_s += a[left];
            else sum_d += a[left];
            left++;
        } else {
            if (turn) sum_s += a[right];
            else sum_d += a[right];
            right--;
        }
        turn = !turn;
    }
 
    cout << sum_s << " " << sum_d << '
';
}