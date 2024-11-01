#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, a;
    cin >> n >> k >> a;

    long long x = (n * k) / a;
    long double y = (long double)(n * k) / a;

    if (y - x > 0)
    {
        cout << "double" << endl;
    }
    else if (y > 2147483647)
    {
        cout << "long long" << endl;
    }
    else
    {
        cout << "int" << endl;
    }

    return 0;
}
