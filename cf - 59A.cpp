#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n = s.length();
    int count_low = 0, count_up = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            count_low++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count_up++;
        }
    }

    if (count_low >= count_up)
    {
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return tolower(c); });
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return toupper(c); });
    }

    cout << s << endl;
    return 0;
}
