#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int b = 0, c = 0, d = 0;
    char e = a[0];
    char x = a[1];
    char f = tolower(a[0]);
    char g = tolower(a[1]);

    if (a[0] == f && a[1] == toupper(a[1]))
    {
        for (int i = 1; i < a.length(); i++)
        {
            char h = a[i];
            char j = tolower(a[i]);
            if (h == j)
            {
                b++;
            }
        }
    }
    //cout << b << endl;
    if (a[0] == f && a[1] == g)
    {
        for (int i = 0; i < a.length(); i++)
        {
            char j = a[i];
            char k = tolower(a[i]);
            if (j == k)
            {
                d++;
            }
        }
    }
    //cout << d << endl;

    if (a[0] != f && a[1] != g)
    {
        for (int i = 0; i < a.length(); i++)
        {
            char l = a[i];
            char m = toupper(a[i]);
            if (l == m)
            {
                c++;
            }
        }
    }

    if (f == e && b == 0 && x != g  && a.length() != d)
    {
        cout << (char)toupper(a[0]);
        for (int i = 1; i < a.length(); i++)
        {
            cout << (char)tolower(a[i]);
        }
        cout << endl;
    }
    else if(e == f && a.length() == 1)
    {
        cout << (char)toupper(a[0]) << endl;
    }
    else if(e != f && a.length() == 1)
    {
        cout << (char)tolower(a[0]) << endl;
    }
    else if (a.length() == d)
    {
        cout << a << endl;
    }
    else if (f == e && b != 0)
    {
        cout << a << endl;
    }
    else if (a.length() == c)
    {
        for (int i = 0; i < a.length(); i++)
        {
            cout << (char)tolower(a[i]);
        }
        cout << endl;
    }
    else
    {
        cout << a << endl;
    }

    return 0;
}
