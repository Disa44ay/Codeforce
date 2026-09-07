#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string bin;
        cin >> bin;
 
        int o = 0, z = 0;
        for(int i = 0; i < n; i++)
        {
            if(bin[i] == '0')
                z++;
            else
                o++;
        }
 
        int pc = 0;
        while(pc != k)
        {
            if(o >= z && o >= 2)
            {
                o -= 2;
                pc++;
            }
            else if(z >= o && z >= 2)
            {
                z -= 2;
                pc++;
            }
            else
            {
                break;
            }
        }
 
        if(o == z && pc == k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
 
    return 0;
}