#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);

        int count = 0;
        int l1 = s1.length();
        int l2 = s2.length();

        for (int i = 0; i < l1; i++)
        {
            if (i >= l2 || s1[i] != s2[i])
            {
                break;
            }
            count++;
        }

        if (count == l1)
        {
            if (l1 == l2)
            {
                cout << l1 + 1 << endl;
            }
            else
            {
                cout << l1 + 1 + l2 - count << endl;
            }
        }
        else if (count >= 1 && count < l1)
        {
            cout << l1 + (l2 - count) + 1 << endl;
        }
        else
        {
            cout << l1 + l2 << endl;
        }
    }

    return 0;
}
