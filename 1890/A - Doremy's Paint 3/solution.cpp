#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> a;
 
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[x]++;
        }
 
        if (a.size() == 2)
        {
            auto it = a.begin();
            int first_count = it->second;
            it++;
            int second_count = it->second;
 
            if (n % 2 == 0 && first_count == second_count)
            {
                cout << "YES
";
            }
            else if (n % 2 == 1 && (abs(first_count - second_count) == 1))
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
        else if (a.size() == 1)
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
 
    return 0;
}