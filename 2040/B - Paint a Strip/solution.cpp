#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n, l = 1, r = 4, count = 2;
        cin >> n;
        if(n <= 4)
        {
            if(n == 1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << count << endl;
            }
        }
        else
        {
            while(r < n)
            {
                count++;
                r = (r+1) * 2;
            }
            cout << count << endl;
        }
    }
}