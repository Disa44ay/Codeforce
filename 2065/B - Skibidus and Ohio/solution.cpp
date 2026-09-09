#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
 
    int t;
    cin >> t;
    cin.ignore();
 
    while (t--)
    {
        string s;
        getline(cin, s);
 
        int n = s.length(), flag = 0;
        for(int i = 1; i < n; i++)
        {
            if(s[i] == s[i-1])
            {
                flag++;
                break;
            }
        }
        if(flag == 1 || n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
}