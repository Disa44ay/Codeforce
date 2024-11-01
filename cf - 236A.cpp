#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size(), i, a, b;

    for(i = 0; i < s.size(); i++)
    {
        for(int j = i + 1; j < s.size(); j++)
        {
            if(s[i] == s[j])
            {
              n = n - 1;
              break;
            }
        }
    }
    cout << n;
        if(n % 2 != 0)
        {
            cout << "IGNORE HIM!";
        }
        if(n % 2 == 0)
            cout << "CHAT WITH HER!";
    }


