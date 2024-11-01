#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);

    int n = s.length();
    int count = 0;
    string k;
    for(int i = n-1; i >= 0; i--)
    {
        k += s[i];
    }
    if (t == k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
