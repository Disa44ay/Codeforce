#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        unordered_map<int, int> first, last;
        first.reserve(n);
        last.reserve(n);
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (!first.count(temp)) first[temp] = i;
            last[temp] = i;
        }
        while (k--)
        {
            int a, b;
            cin >> a >> b;
            if (first.count(a) && last.count(b) && first[a] < last[b])
            {
                cout << "YES
";
            }
            else
            {
                cout << "NO
";
            }
        }
    }
}