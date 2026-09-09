#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
 
        string s;
        cin >> s;
 
        int x = 0, y = 0;
 
        for (int j = 0; j < 100; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'N') y++;
                else if (s[i] == 'E') x++;
                else if (s[i] == 'S') y--;
                else if (s[i] == 'W') x--;
 
                if (x == a && y == b)
                {
                    cout << "YES" << endl;
                    goto nextTestCase;
                }
            }
        }
 
        cout << "NO" << endl;
 
    nextTestCase:
        continue;
    }
 
    return 0;
}