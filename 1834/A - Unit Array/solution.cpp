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
        int a[n];
        int count_p = 0, count_m = 0, count = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] > 0)
            {
                count_p++;
            }
            else
            {
                count_m++;
            }
        }
 
        while(count_m > count_p || count_m % 2 == 1){
            count++;
            count_m--;
            count_p++;
        }
 
        cout << count << endl;
    }
}
 