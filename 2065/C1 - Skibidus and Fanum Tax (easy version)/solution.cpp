#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        vector<long long> b(m);
        long long int b1;
        cin >> b1;
        
        long long prev_max = LLONG_MIN;
        bool possible = true;
        for (int i = 0; i < n; ++i)
        {
            long long x = a[i];
            long long y = b1 - x;
            long long current_min = LLONG_MAX;
            bool found = false;
            if (x >= prev_max)
            {
                current_min = min(current_min, x);
                found = true;
            }
            if (y >= prev_max)
            {
                current_min = min(current_min, y);
                found = true;
            }
            if (!found)
            {
                possible = false;
                break;
            }
            else
            {
                prev_max = current_min;
            }
        }
        cout << (possible ? "YES" : "NO") << "
";
    }
    return 0;
}