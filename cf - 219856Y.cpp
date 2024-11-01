#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int a[26];
    char c[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    for (int i = 0; i < 26; i++)
    {
        cin >> a[i];
    }

    vector<int> d(s.length(), -1);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '?')
        {
            int target = i;
            char last = (target > 0) ? s[target - 1] : ' ';
            char next = ' ';

            int j = target;
            while (j < s.length() && s[j] == '?') j++;
            if (j < s.length()) next = s[j];

            int last_power = (last != ' ' && isalpha(last)) ? a[last - 'a'] : -1;
            int next_power = (next != ' ' && isalpha(next)) ? a[next - 'a'] : -1;

            char replacement_char = (last_power >= next_power) ? last : next;

            int max_power = max(last_power, next_power);
            for (int k = 0; k < 26; k++)
            {
                if (a[k] == max_power)
                {
                    replacement_char = c[k];
                    break;
                }
            }

            for (int k = target; k < j; k++)
            {
                s[k] = replacement_char;
                d[k] = replacement_char - 'a';
            }

            i = j - 1;
        }
        else
        {
            d[i] = s[i] - 'a';
        }
    }

    int sum_of_mods = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        sum_of_mods += abs(a[d[i]] - a[d[i + 1]]);
    }

    cout << sum_of_mods << endl;
    cout << s << endl;

    return 0;
}
