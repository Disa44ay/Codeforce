#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int d, count = 0;

    while (n > 0)
    {
        d = n % 10;
        n = n / 10;
        if (d == 4 || d == 7)
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << count << " " << "YES" << endl;
    }
    else
    {
        cout << count << " " << "NO" << endl;
    }

    return 0;
}
