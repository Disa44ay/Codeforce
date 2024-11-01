#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long int a = n / 4;
    long double b = double(n) / 4;
    long double c = b - a;
    int d;
//    cout << c << endl;
    if(a % 2 == 0 || a == 0)
    {
        if(c == 0)
        {
            cout << a << " " << 0 << endl;
        }
        else if (c == 0.25)
        {
            cout << a << " " << 1 << endl;
        }
        else if (c == 0.5)
        {
            cout << a << " " << 2 << endl;
        }
        else
        {
            cout  << a << " " << 3 << endl;
        }
    }
    else
    {
        if(c == 0)
        {
            cout << a << " " << 3 << endl;
        }
        else if (c == 0.25)
        {
            cout << a << " " << 2 << endl;
        }
        else if (c == 0.5)
        {
            cout << a << " " << 1 << endl;
        }
        else
        {
            cout  << a << " " << 0 << endl;
        }
    }
    return 0;
}
