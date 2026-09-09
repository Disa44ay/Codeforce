#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        if (k >= m && k >= n)
        {
            cout << n * m << endl;
        }
        else if (k >= m && k < n)
        {
            cout << k * m << endl;
        }
        else if (k < m && k >= n)
        {
            cout << k * n << endl;
        }
        else{
            cout << k * k << endl;
        }
    }
    return 0;
}