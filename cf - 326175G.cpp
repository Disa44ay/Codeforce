#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long e, m, b;
    cin >> e >> m >> b;

    long long int count = 0;
    long long int n = min(e, min(m, b));

    if(n == m || n == b)
    {
        count += n;
        e = e - n;
        m = m - n;
        b = b - n;

        int a = b * 2;
        if(a <= e)
        {
//          cout << n <<" "<< a << " "  << endl;
            cout << count + b << endl;
        }
        else
        {
            count += e / 2;
//          cout << n <<" "<< a << " " << b/2 << " "  << endl;
            cout << count  << endl;
        }
    }
    else
    {
        cout << e << endl;
    }


    return 0;
}
