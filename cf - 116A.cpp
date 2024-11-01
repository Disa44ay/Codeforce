#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int c;

    int total = 0;

    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;

        if (i == 0)
        {
             total += a + b;
        }
        else
        {
             total = total - a + b;
        }
        c = max(c, total);
    }

    cout << c << endl;

    return 0;
}
