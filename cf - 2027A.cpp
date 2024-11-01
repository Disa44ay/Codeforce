#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, l, h;
        cin >> n;
        int maxl = INT_MIN, maxh = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            cin >> l >> h;
            if(l > maxl)
            {
                maxl = l;
            }
            if(h > maxh)
            {
                maxh = h;
            }
        }
        cout << 2*(maxl + maxh) << endl;
    }
    return 0;
}
