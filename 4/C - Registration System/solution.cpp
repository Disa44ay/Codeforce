#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    map<string, int> m;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
 
        if(m[s] == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << s << m[s] << endl;
        }
        m[s]++;
    }
}