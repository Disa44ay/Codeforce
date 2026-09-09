#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
 
        sort(a, a + n);
        long long sum = 0;
 
        if (a[0] != 1)
        {
            sum += a[0] - 1;
            a[0] = 1;
        }
 
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1] + 1)
            {
                long long temp = a[i - 1] + 1;
                sum += (a[i] - temp);
                a[i] = temp;
            }
        }
 
        cout << sum << '
';
    }
    return 0;
}