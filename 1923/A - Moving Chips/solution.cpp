#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, f = -1, l = -1, count = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i< n; i++){
             if(a[i] == 1)
            {
                if(f == -1)
                {
                    f = i;
                }
                l = i;
            }
        }
        for(int i = f; i < l; i++) 
        {
            if(a[i] == 0)
            {
                count++;
            }
        }
         cout << count << "
";
    }
    return 0;
}