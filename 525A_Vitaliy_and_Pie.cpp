#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    unordered_map<char, int> key;
    int count = 0;
 
    for(int i = 0;i < s.length();i++)
    {
        if(i % 2 == 0)
        {
            key[s[i]]++;
        }
        else
        {
            char door = tolower(s[i]);
 
            if(key[door] > 0)
            {
                key[door]--;
            }
            else
            {
                count++;
            }
        }
    }
    cout << count << "\n";
    return 0;
}
 