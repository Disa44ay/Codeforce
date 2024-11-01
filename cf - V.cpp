#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    char c;
    cin >> c;
    cin >> b;

    if(c == '>')
    {
        if(a - b > 0)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if (c == '<')
    {
        if (a - b < 0)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else
    {
        if(a == b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}
