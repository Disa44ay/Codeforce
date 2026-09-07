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
        long long int n;
        cin >> n;
 
        vector<long long int> a;
        for (long long int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            if (!a.empty() && a.back() > x)
            {
                a.push_back(1);
            }
            a.push_back(x);
        }
 
        cout << a.size() << "\n";
        for (long long int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
 
    return 0;
}